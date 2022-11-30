#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#define ll long long
using namespace std;
int main() {
int n;
cin>>n;
vector<int>v(n);
    for (int i = 0; i < n; i++) {
cin>>v[i];
    }

    vector<int>v3;
    for (int i = 0; i < n; i++) {

        int sum = 0;
        for (int j = 0; j < v[i]; j++) {
            vector<int>v2(v[i]);
            cin>>v2.at(j);
            sum+=5*v2[j]+15;
        }
        v3.push_back(sum);
    }

int mn = v3.at(0);
    for (int i = 0; i < v3.size(); i++) {
        if(v3.at(i)<mn){
            mn=v3.at(i);
        }
    }
    cout<<mn<<endl;

    return 0;
}
