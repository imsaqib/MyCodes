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
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        if(A[n-1]>=A[0]+A[1]){
            cout << "1 2 " << n << endl;
        }
        else cout << "-1\n";
    }
    
}
