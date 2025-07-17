#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second

int main(){
    vector<ll> v;
    ll n; cin >> n;
    ll soma = 0;
    for(ll i = 0; i < n;i++){
        ll x;
        cin >> x;
        soma += x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    vector<ll> somas;

    for(ll mask = 0; mask < (1<<n); mask++){
        ll soma_c = 0;
        for(ll i = 0; i < n; i++){
            if(mask & (1 << i)){
                soma_c += v[i];
            }
        }
        somas.push_back(soma_c);
    }

    ll res = llabs(2*somas[0] - (soma));
    for(ll i = 1; i < somas.size();i++){
        if(llabs(2*somas[i] - (soma)) < res){
            res = llabs(2*somas[i] - (soma));
        }
    }
    cout << res << "\n";
    return 0;
}