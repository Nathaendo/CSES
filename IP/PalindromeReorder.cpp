#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define pb push_back
#define mp make_pair



int main(){
    string s;
    cin >> s;

    int n = s.size();

    sort(s.begin(),s.end());
    vector<pair<char,int>> par,impar;
    int ult_i = 0;
    for(int i = 1; i < n;i++){
        if(s[i] != s[i-1]){
            if(((i-ult_i)%2) == 0){
                par.pb(mp(s[i-1],i-ult_i));
            }
            else{
                impar.pb(mp(s[i-1],i-ult_i));
            }
            ult_i = i;
        }
    }
    if(((n-ult_i)%2) == 0){
        par.pb(mp(s[n-1],n-ult_i));
    }else{
        impar.pb(mp(s[n-1],n-ult_i));
    }

    if(impar.size() > 1 || ((impar.size() == 1) && (n%2 == 0))){
        cout << "NO SOLUTION\n";
        return 0;
    }

    for(int i = 0; i < (par.size());i++){
        for(int j = 0; j < par[i].S/2;j++){
            cout << par[i].F;
        }
    }
    for(int i=0;i<impar.size();i++){
            for(int j = 0;j<impar[i].S;j++){
                cout<< impar[i].F;
            }
        }
    for(int i = (par.size() - 1); i >= 0;i--){
        for(int j = 0; j < par[i].S/2;j++){
            cout << par[i].F;
        }
    }
    cout << "\n";
    return 0;
}
