#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second

void print(){}

unsigned long long fatorial(int n) {
    unsigned long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main(){
    string ent; cin >> ent;
    sort(ent.begin(),ent.end());

    map<char,int> letras;

    for(auto w : ent){
        letras[w]++;
    }

    int n = ent.size();
    unsigned long long total = fatorial(n);

    for(auto par : letras){
        total /= fatorial(par.S);
    }

    cout << total << '\n';
    
    do{
        cout << ent << '\n';
    }while(next_permutation(ent.begin(),ent.end()));
    return 0;
}