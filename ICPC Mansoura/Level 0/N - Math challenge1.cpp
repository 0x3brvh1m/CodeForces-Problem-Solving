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
    string n;
    cin>>n;
    if(n[n.length()-1]%2==0){
        cout<<"Even";
    }else cout<<"Odd";
    return 0;
}
