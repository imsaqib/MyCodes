#include <bits/stdc++.h>
#define mdsaqib std::ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define all(c) (c).begin(),(c).end()
#define endl '\n'
using namespace std;

signed main(){
    mdsaqib;
    string s;
    cin >> s;
    int mx=0;
    int r=0;
    for(int i=0;i<3;i++){
        if(s[i]=='R'){
            r++;
            mx=max(mx,r);
        }
        else r=0;
    }
    cout << mx;
}
