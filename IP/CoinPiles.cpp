#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second

int main(){
    int t;cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        if((a > 2*b) || (b > 2*a) || ((a+b)%3 != 0 )){
            cout << "NO\n";
        }
        else    
            cout << "YES\n";
    }
    return 0;
}