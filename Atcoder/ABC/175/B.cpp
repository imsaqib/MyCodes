#include <bits/stdc++.h>
#define mdsaqib std::ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define all(c) (c).begin(),(c).end()
#define endl '\n'
using namespace std;

signed main(){
    mdsaqib;
    int n;
    cin >> n;
    vector <int> A(n);
    for(int i=0;i<n;i++)cin >> A[i];
    sort(all(A));
    int ans=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(A[j]==A[i])continue;
            for(int k=j+1;k<n;k++){
                if(A[k]==A[j])continue;
                if(A[i]+A[j]>A[k])ans++;
            }
        }
    }
    cout << ans;
}
