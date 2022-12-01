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
    int x = 0;

    int n;
    cin>>n;
    string v[n];
    for(int i = 0 ; i < n ; i++){
    cin>>v[i];
    if(v[i][1]=='+'){
        x++;
    }else{
        x--;
    }
    }
    cout<<x<<endl;
    return 0;
}
