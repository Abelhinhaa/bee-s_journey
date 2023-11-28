// https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;

unordered_map<long, long> memo;

long diag_f(long n){
    return n * n - (n-1);
}
int main(){
    long N;
    cin >> N;
    
    for (int i = 0; i < N; i++){
        long col, row;
        cin >> row >> col;

        if (row > col){
            long diag = diag_f(row);
                cout << diag + (row%2 == 0 ? (row-col) : -(row-col)) << "\n";
        }
        else{
            long diag = diag_f(col);
                cout << diag + (col%2 == 0 ? -(col-row): (col-row))  << "\n";
        }
    
    }
}
