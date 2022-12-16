#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;
const int MAX = 1000001;

void solve(){
    int n; cin >> n;
    int arr[n];
    long long int a; cin >> a;
    for(int i = 1; i<n ; i++)
        cin >> arr[i];
    sort(arr, arr+n-1);
    for(int i = 1; i<n ; i++)
    {
        if(a < arr[i])
        {
            if((arr[i] - a) % 2 == 0)
                a += (arr[i] - a)/2;
            else
                a += (arr[i] - a)/2+1;
        }
    }
    cout << a << endl;
}

int main(){
    int t=1;
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; cout.tie(NULL) ;
    cin >> t;
    while(t--) solve();
}
