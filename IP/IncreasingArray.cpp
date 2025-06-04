#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long novo, ant,sum;
    ant = 0;
    sum = 0;
    for(long long i = 0; i < n; i++){
        cin >> novo;
        if(novo < ant){
            sum += (ant-novo);
        }
        else{
            ant = novo;
        }
    }
    cout << sum << endl;
    return 0;
}
