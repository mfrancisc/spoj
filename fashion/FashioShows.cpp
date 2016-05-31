#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(vector <int>& vect, int min, int max) {
    
    int pivot = vect[max];
    int i = min - 1;
    
    for(int j = min; j <= max - 1; j++) {
        
        if(vect[j] <= pivot) {
            i++;
            swap(&vect[i], &vect[j]);
        }
    }
    swap(&vect[i + 1], &vect[max]);
    return i + 1;
}

void quickSort(vector <int>& vect,int min,int max) {
    if(min < max) {
        // partitioned index
        int pi = partition(vect, min, max);
        
        quickSort(vect, min, pi - 1);
        quickSort(vect, pi + 1, max);
    }
}


int main() {
    
    vector <int> mensFashion;
    vector <int> womensFashion;
    
    int t;
    cin>>t;
    
    int n;
    for(int i = 0; i < t; i++){
        cin>>n;
        
        int f;
        for(int a = 0; a < n; a++) {
            cin>>f;
            mensFashion.push_back(f);
        }
        
        
        for(int b = 0; b < n; b++) {
            cin>>f;
            womensFashion.push_back(f);
        }
        
        // sort lists
        quickSort(mensFashion, 0, mensFashion.size() - 1);
        quickSort(womensFashion, 0, womensFashion.size() - 1);
        
        
        // MMDS calc and sum
        vector <int> hotnessBonds;
        while(!mensFashion.empty()) {
            
            int mf = mensFashion.front();
            
            int wf = womensFashion.front();
            
            hotnessBonds.push_back(mf * wf);
            mensFashion.erase(mensFashion.begin());
            womensFashion.erase(womensFashion.begin());
        }
        
        // output total
        int total = 0;
        while(!hotnessBonds.empty()) {
            total += hotnessBonds.front();
            hotnessBonds.erase(hotnessBonds.begin());
        }
        
        cout << total << endl;
        
        
        
    }
    
}

