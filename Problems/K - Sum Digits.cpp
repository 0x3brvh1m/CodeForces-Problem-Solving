#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#define itn int
#include <string>
#include <cstdlib>
using namespace std;




int main(){
int n;
cin>>n;
string s;
cin>>s;
int sum = 0;
for(itn i = 0; i< n ; i++){
    int x = (int)s[i] -48;
sum+=x;
}
cout<<sum<<endl;
}


