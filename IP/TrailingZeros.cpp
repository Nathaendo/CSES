#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second

int main(){
    ll ent; cin >> ent;
    ll res = 0;
    while(ent/5 > 0){
        ent = ent/5;
        res += ent;
    }
    cout << res << "\n";
}