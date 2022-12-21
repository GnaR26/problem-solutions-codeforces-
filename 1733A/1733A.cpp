#include <bits/stdc++.h>

using namespace std;

const long long int MOD = 1000000007;
const int MAX = 1000001;

void solve(){
    int n,k; cin >> n >> k;
    int arr[n];
    long long int sum = 0;
    for(int i = 0; i<n ; i++)
    {
        cin >> arr[i];
        if(i >= k && arr[i%k] < arr[i])
        {
            int ans = arr[i%k];
            arr[i%k] = arr[i];
            arr[i] = ans;
        } 
    }
    for(int i = 0; i<k ; i++)
        sum += arr[i];
    cout << sum << endl;
}

int main(){
    int t=1;
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; cout.tie(NULL) ;
    cin >> t;
    while(t--) solve();
}
