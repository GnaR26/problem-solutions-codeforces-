#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;
const int MAX = 1000001;

void solve(){
    set <int> myset;
    int n; cin >> n;
    long long sum = 0;
    for(int i = 0 ; i<n ; i++)
    {
        int k; cin >> k;
        if(k % 2 == 0)
        {    
            myset.insert(-k);
        }
    }
    for(auto& element : myset)
    {
        sum++;
        if((element/2) % 2 == 0)
        {
            myset.insert(element/2);
        }
    }
    cout << sum << endl;
}

int main(){
    int t=1;
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; cout.tie(NULL) ;
    cin >> t;
    while(t--) solve();
}
