#include <bits/stdc++.h>

using namespace std;

const long long int MOD = 1000000007;
const int MAX = 1000001;

void solve(){
    long long int x, y; cin >> x >> y;
    long long int n; cin >> n;
    long long int res;
    switch(n%6)
    {
        case 0: res=x-y; break;
        case 1: res = x; break;
        case 2: res = y; break;
        case 3: res = y-x; break;
        case 4: res = -x; break;
        case 5: res = -y; break;
    }
    cout << (res+MOD*10) % MOD << endl;
}

int main(){
    int t=1;
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; cout.tie(NULL) ;
    //cin >> t;
    while(t--) solve();
}
