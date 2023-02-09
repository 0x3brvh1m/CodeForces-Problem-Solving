#include <iostream>
#include <vector>
using namespace std;
int main() {
    spd();
// Prefix sum
vector<int> v = {1,2,3,4,5,6,7,8,9};
vector<int> pf(v .size());
pf[0] = v[0];
    for (int i = 1; i < v.size(); ++i) {
        pf[i]=pf[i-1]+v[i];
    }
    for (int i = 0; i < v.size(); ++i) {
        cout<<pf[i]<<" ";

        //Output => 1 3 6 10 15 21 ...
    }
 }
