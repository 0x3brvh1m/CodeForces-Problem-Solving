#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>
#include <cmath>
#include <deque>
#include <iterator>
#include <numeric>
#include <bits/stdc++.h>
#include <string>
#define itn int
#include <regex>
#define ll long long
#define cn(v) for(auto &(i):v)cin>>(i)
#define co(v) for(auto i:v)cout<<(i)
using namespace std;

bool isPalindrome(unsigned n)
{

    unsigned rev = 0;


    unsigned k = n;
    while (k)
    {

        rev = (rev << 1) | (k & 1);
        k = k >> 1;
    }


    return n == rev;
}
    void solve(ll x) {
        if (x % 2 == 1) {
            if(isPalindrome(x)){
                cout<<"YES";

            }else{
                cout<<"NO";
            }
        } else {
            cout << "NO";
        }
    }


    int main() {
        ll x;
        cin >> x;
        solve(x);
        return 0;
    }


