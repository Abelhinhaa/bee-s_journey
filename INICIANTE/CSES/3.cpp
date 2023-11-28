// https://cses.fi/problemset/task/1069
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string input;
    char c_atual = '\0';
    int cont = 0, tot = 0;
    cin >> input;
    // range based for loop ou foreach loop- rangeDeclaration : rangeExpression) 
    for (char c : input){
        if (c == c_atual){
            cont++;
        }
        else {
            c_atual = c;
            cont = 1; 
        }
        if (tot < cont)
            tot = cont; 
    }
    cout << tot;
}