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
int n;
cin>>n;
    for(int i = 1 ; i <= 4*n ; i++){

        i%4!=0?cout<<i<<" " : cout<<"PUM"<<endl;
    }
}

