#include <bits/stdc++.h>
#define mdsaqib std::ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define all(c) (c).begin(),(c).end()
#define endl '\n'
using namespace std;

signed main(){
    mdsaqib;
    int n,k;
    cin >> n >> k;
    vector <int> A(n),B(n);
    for(auto& a:A)cin >> a;
    for(auto& a:B)cin >> a;
    int ans=0;
    vector <int> X(n);
    for(int i=0;i<n;i++){
        vector <int> V(n,-1);
        int temp=0;
        int mx=B[A[i]-1];
        int tot=0;
        int pos=i;
        int kk=k;
        while(kk--){
            if(V[pos]>-1)break;
            //cout << pos<<" ";
            V[pos]=pos;
            pos=A[pos]-1;
            tot+=B[pos];
            mx=max(mx,tot);
            temp++;
        }
        //cout << endl;
        if(tot<=0){
            X[i]=mx;
        }
        else if(temp==k){
            X[i]=mx;
        }
        else{
            int zz=k/temp;
            kk=k-zz*temp;
            int mxx=max(mx,(zz-1)*tot+mx);
            mx=zz*tot;
            tot=0;
            pos=i;
            while(kk--){
                pos=A[pos]-1;
                tot+=B[pos];
                mxx=max(mxx,mx+tot);
            }
            X[i]=mxx;
        }
    }
    sort(all(X));
    cout << X[n-1];
    // for(int i=0;i<n;i++){
    //     cout << X[i] << " ";
    // }
}
