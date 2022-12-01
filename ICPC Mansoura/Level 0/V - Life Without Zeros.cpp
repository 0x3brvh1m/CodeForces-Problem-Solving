#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>
#include <cmath>

#include <string>
#define ll long long
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
int x = stoi(a)+ stoi(b);
string y = to_string(x);

    a.erase(remove(a.begin(),a.end(),'0'),a.end());
    b.erase(remove(b.begin(),b.end(),'0'),b.end());
    y.erase(remove(y.begin(),y.end(),'0'),y.end());
    int as,bs,ys;


    if((stoi(a)+stoi(b)== stoi(y))){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

 return 0;
}
