#include <bits/stdc++.h>

using namespace std;

const long long int MOD = 1000000007;
const int MAX = 1000001;

void solve(){
    string s; cin >> s;
    int a = s[0] - '0';
    int b = s[2] - '0';
    cout << a+b << endl;
    
}

int main(){
    int t=1;
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; cout.tie(NULL) ;
    cin >> t;
    while(t--) solve();
}
