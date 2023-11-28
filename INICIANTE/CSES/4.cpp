#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; 
    long cont = 0;
 
    cin >> n;
    vector<long> input(n);
 
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
 
    for(int i = 0; i < n-1; i++){
        while(input[i+1] < input [i]){
            input[i+1]++;
            cont++;
        }
    }
    cout << cont;
    return 0;
}