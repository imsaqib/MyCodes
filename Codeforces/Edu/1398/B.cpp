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
        string s;
        cin >> s;
        int n=s.size();
        vector <int> V;
        int pr=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')pr++;
            else if(pr>0){V.push_back(pr);pr=0;}
        }
        if(pr>0)V.push_back(pr);
        sort(all(V));
        int ans=0;
        reverse(all(V));
        for(int i=0;i<V.size();i+=2){
            ans+=V[i];
        }
        cout << ans << endl;
    }
    
}
