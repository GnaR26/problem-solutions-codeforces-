#include <bits/stdc++.h>

using namespace std;

const long long int MOD = 1000000007;
const int MAX = 1000001;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    char maxx = 0;
    for(int i = 0 ; i<n ; i++)
        maxx = max(maxx, s[i]);
    cout << maxx - 'a' + 1 << endl;
}

int main(){
    int t=1;
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; cout.tie(NULL) ;
    cin >> t;
    while(t--) solve();
}
