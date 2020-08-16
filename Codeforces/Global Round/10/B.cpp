#include <bits/stdc++.h>
#define mdsaqib std::ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define all(c) (c).begin(),(c).end()
#define endl '\n'
using namespace std;

signed main(){
    mdsaqib;
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector <int> A(n);
        for(auto& a:A)cin >> a;
        int mx=-1e10;
        int mn=1e10;
        for(int i=0;i<n;i++){
            mx=max(A[i],mx);
            mn=min(A[i],mn);
        }
        for(int i=0;i<n;i++){
            A[i]=mx-A[i];
        }
        if(k%2==0){
            for(int i=0;i<n;i++){
                A[i]=mx-mn-A[i];
            }
        }
        for(int i=0;i<n;i++){
            cout << A[i] << " " ;
        }
        cout << endl;
    }
    
}
