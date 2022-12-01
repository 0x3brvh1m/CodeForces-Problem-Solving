#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>
#include <cmath>
#define ll long long
using namespace std;
int main() {
    string s;
    cin>>s;
    ll sum = 0 ;
    for(int i = 0; i < s.length() ; i++){
        sum+=(int)s[i];
    }
    if(sum%3==0){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
    return 0;
}
