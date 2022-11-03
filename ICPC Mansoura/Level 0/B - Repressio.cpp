#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#define itn int
#define fro for
#include <string>
#include <cstdlib>
using namespace std;


int main(){
int a,b,c;
cin>>a>>b>>c;
int x = a+b, y = b+c, z= a+c;
int mx = max(x,max(y,z));
cout<<mx;
}
