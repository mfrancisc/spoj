#include <iostream>
#include <list>
#include <ctype.h>
using namespace std;

list <char> p;
list <char> n;
list <char> o;

void rpnForm () {
    // pop the last (
    p.pop_back();
    // output all letters
    while(!n.empty())
    {
        cout << n.front(); 
        n.pop_front();
    } 
    // output the last operator
    cout << o.back();
    o.pop_back();
}

void listCharsInString(string expr){
    for(int i = 0; i < expr.size(); i++) {
        char c = expr[i];
        // add to parenthesis list
        if(c == '(')
        {
            p.push_back('('); 
            // add to letters list
        } else if (isalpha(c))
        {
            n.push_back(c); 
            // add to operators list
        } else if( c == '+' || c ==  '-' || c == '*' || c == '/' || c == '^')
        {
            o.push_back(c);
            // output in rpn form when )
        } else if ( c == ')'){
            rpnForm(); 
        } 
    }
}
int main(){

    string expr;

    while(getline (std::cin,expr)){
        // read chars from string
        listCharsInString(expr);
        cout << endl;
    } 
}

