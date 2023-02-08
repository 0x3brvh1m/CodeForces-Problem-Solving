#include<bits/stdc++.h>
#define maxn 1000010
using namespace std;

void fast()
{
    std::ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

}


bool prime(long m)
{
    for(int t=2; t*t<=m; t++)
    {
        if(m%t==0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    fast();

    double c,i=0,b,p=5,j,u,r,d,maxx=0,m,n;
long a;


   map<char ,long>mapp;
   map<char ,long>mp;
   string s,v;
   cin>>a;

  while(a--){
        map<double,long>mapp,mp;
    cin>>b>>c;
    mapp[b+c]++;
        mapp[b*c]++;


     p=b-c;
  if(p>0){
        mapp[p]++;
        if(p!=-1*p)
        mp[p]++;



  }else {if(p!=-1*p)mp[-1*p]++;mapp[-1*p]++;}

     p=b+c;
     mapp[b/c]++;
     mapp[c/b]++;

     cout<<mapp.size()+mp.size()<<endl;



  }







}
