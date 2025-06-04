#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    if(n == 2 || n == 3){
        cout << "NO SOLUTION\n";
        return 0;
    }

    for(ll i = n; i >= 1; i--){
        if((i % 2) != 0){
            cout << i << ' ';
        }
    }

    for(ll i = n; i >= 1; i--){
        if((i % 2) == 0){
            cout << i << ' ';
        }
    }
    cout << endl;
    return 0;
}