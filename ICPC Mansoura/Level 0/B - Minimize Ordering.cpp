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
#include <cstring>
#include<bits/stdc++.h>
using namespace std;

void sortString(string &str)
{
   sort(str.begin(), str.end());
}
int main(){
string s;
cin>>s;
sortString(s);
cout<<s<<endl;
}

