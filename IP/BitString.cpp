#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second


const ll lim = 1e9+7;

int main(){
    ll ent; cin >> ent;
    ll res = 2;
    for(ll i = 1; i < ent; i++){
        res = res*2%lim;
    }
    cout << res%lim << "\n";
    return 0;
}