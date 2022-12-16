#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;
const int MAX = 1000001;



void solve(){
    map <string, int> mp;
    mp["Tetrahedron"] = 1;
    mp["Cube"] = 2;
    mp["Octahedron"] = 3;
    mp["Dodecahedron"] = 4;
    mp["Icosahedron"] = 5;
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i<n ; i++)
    {
        string s; cin >> s;
        switch(mp[s])
        {
            case 1: sum += 4; break;
            case 2: sum += 6; break;
            case 3: sum += 8; break;
            case 4: sum += 12; break;
            case 5: sum += 20; break;
        }
    }
    cout << sum << endl;
}

int main(){
    int t=1;
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; cout.tie(NULL) ;
    //cin >> t;
    while(t--) solve();
}
