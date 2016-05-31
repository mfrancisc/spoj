#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int col,i,j,flag;
    char a[1000];
    while(true)
    {
        cin>>col;
        if(col == 0)
            break;
        cin>>a;
        int k = 1;
        for(int i = 0; i < col; i++){

            flag = 0;
            for(int j = i; j < strlen(a); j+= col){
                if(flag == 0){
                    cout<<a[j];
                    flag = 1;
                } else {
                    cout<<a[j+col-k];
                    flag = 0;
                }
            }
            k+=2;

        }

        cout<<"\n";
    }
    return 0;
}
