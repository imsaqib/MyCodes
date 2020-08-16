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
        bool diff=false;
        for(int i=0;i<n-1;i++){
            if(A[i]!=A[i+1]){
                diff=true;
                break;
            }
        }
        if(diff)cout << "1\n";
        else cout << n << endl;
    }
    
}
