#include <bits/stdc++.h>
#include <bitset>

using namespace std;

#define ll long long
#define F first
#define S second

int gray(ll n){
    
    return n ^ (n >> 1);
}

int main(){
    ll ent; cin >> ent;
    string ult;
    int ctrl = 1 << ent;
    for(ll i = 0; i < ctrl; i++){
        ll g = gray(i);
        if(g >= ctrl){
            break;
        }
        bitset<64> bin(g);
        string bin_str = bin.to_string();
        string ultimos_n_bits = bin_str.substr(64 - ent);

        cout << ultimos_n_bits << endl;
    }

    return 0;
}