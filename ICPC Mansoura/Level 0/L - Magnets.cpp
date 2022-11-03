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
int n,c=1,f ;
cin>>n;
cin>>f;
for(int i = 0; i < n-1 ; i++){
    int x;
    cin>>x;
    if(x!=f){
        c++;
        f=x;
    }else{

    }

}
cout<<c<<endl;
}

