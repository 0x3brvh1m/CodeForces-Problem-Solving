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
ll n,x ;
cin>>n;
x = pow(-1,n)*n;
if(n%2==0){
cout<<x-(n/2)<<endl;

}else{
cout<<x+(n/2)<<endl;
}
}

