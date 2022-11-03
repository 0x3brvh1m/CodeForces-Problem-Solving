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
string s;
cin>>n;
cin>>s;
int c=0;
for(int i = 0;i<n-1;i++){
    if(s[i]==s[i+1]){
        c++;
    }
}
cout<<c<<endl;

}

