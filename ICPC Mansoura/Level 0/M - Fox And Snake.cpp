#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#define itn int
#define fro for
#include <string>
#include <cstdlib>
#define ll long long
using namespace std;

int main(){
int n,m;
cin>>n>>m;
for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <=m ; j++){
            if(i%2==1)
        cout<<"#";
    if((i/2)%2!=0&&i%2==0){
        if(j==m) cout<<"#";
        else cout<<".";
    }
    if((i/2)%2==0&&i%2==0){
        if(j==1) cout<<"#";
        else cout<<".";
    }

    }
    cout<<endl;
}
}

