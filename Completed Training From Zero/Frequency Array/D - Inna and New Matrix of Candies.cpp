#include <bits/stdc++.h>
using namespace std;
 int main() {
	cin.tie(0);
    cin.sync_with_stdio(0);
set<int>et;
 int n,m,g=0,c=0;  cin>>n>>m;
 for(int i=0;i<n;i++){
        string s; cin>>s;
    for(int i=0;i<m;i++){
        if(s[i]=='G') g=i;
        else if(s[i]=='S') c=i;
       }
       if(c-g<0){cout<<-1; return 0;}
    else {et.insert(c-g);}
 }
 cout<<et.size();

}
