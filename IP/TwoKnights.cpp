#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second

int main(){
    ll n;
    cin >> n;
    for (ll k = 1; k <= n; k++){
        ll pos = (k*k*((k*k)-1))/2; //total de posições
        ll ata = 4*(k-1)*(k-2);   //Separar em blocos de 3x2/2x3, pois cada um tem 2 maneiras de ataque
        cout << pos - ata << endl;
    }
    
    return 0;
}