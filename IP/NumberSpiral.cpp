#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second

void solve(ll x, ll y){
    if(y >= x){
        if((y % 2) == 0){
            cout << (y-1)*(y-1) + x << endl;
            return;
        }
        cout << ((y)*(y) - (x-1)) << endl;
        return;
    }
    if((x % 2) == 0){
        cout << (x)*(x)-(y-1) << endl;
        return;
    }
    cout << (x-1)*(x-1) + y << endl;
    return;


}
int main(){
    int t;
    cin >> t;
    ll x,y;
    while(t--){
        cin >> x >> y;
        solve(x,y);
    }
    return 0;
}
