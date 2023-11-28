// https://cses.fi/problemset/task/1083
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, sum = 0, tot = 0; 
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum = sum + i; 
    }
    for(int i = 1; i < n; i++){
        int x;
        cin >> x;
        tot = tot + x;
    }
    cout << sum - tot;
}