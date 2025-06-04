#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second

int main(){
    ll n;
    cin >> n;
    ll sum = ((n*n) + n)/2;
    ll meta = sum/2;
    ll sum_atual = 0;
    ll maior_disp = n;
    if(sum % 2 == 1){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    set<ll> s;
    set<ll> s2;
    for(ll i = 1; i <= n;i++){
        s.insert(i);
    }
    while(sum_atual != meta){
        if((meta-sum_atual) > maior_disp){
            sum_atual += maior_disp;
            s.erase(maior_disp);
            s2.insert(maior_disp);
            maior_disp--;
        }
        else{
            ll resto = meta - sum_atual;
            sum_atual += resto;
            s.erase(resto);
            s2.insert(resto);
        }
    }
    cout << s.size() << "\n";
    for(auto x: s){
        cout << x << " ";
    }
    cout << "\n" << s2.size() << "\n";
    for(auto x: s2){
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}