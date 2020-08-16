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
        int n;
        cin >> n;
        vector <int> A(n);
        for(auto& a:A)cin >> a;
        vector <int> B(n);
        int mx=A[0];
        for(int i=0;i<n;i++){
            mx=max(A[i],mx);
            B[i]=mx-A[i];
        }
        int ans=0;
        for(int i=1;i<n;i++){
            if(B[i]>B[i-1]){
                ans+=B[i]-B[i-1];
            }
        }
        cout << ans << endl;
    }
    
}
