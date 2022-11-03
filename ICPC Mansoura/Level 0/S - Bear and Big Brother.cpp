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
int a,b;
cin>>a>>b;
for(int i = 0 ; i<10 ; i++){
    if(a*pow(3,i)>b*pow(2,i)){
        cout<<i<<endl;
        break;
    }
}
}

