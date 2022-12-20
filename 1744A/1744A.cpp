#include <bits/stdc++.h>

using namespace std;

const long long int MOD = 1000000007;
const int MAX = 1000001;

void solve(){
    map <int, char> mp;
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        cin >> arr[i];
    }
    string s; cin >> s;
    for(int i = 0; i<n ; i++)
    {
        if(!mp[arr[i]])
            mp[arr[i]] = s[i];
        if(mp[arr[i]] != s[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    int t=1;
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; cout.tie(NULL) ;
    cin >> t;
    while(t--) solve();
}
