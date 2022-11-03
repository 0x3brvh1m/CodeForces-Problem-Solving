#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll sum = n*(n+1)/2;
        ll r = log2(n)+1;
        ll expSum = pow(2,r)-1;

        // Print the final Sum
        cout << sum-(expSum*2) << endl;
    }


    return 0;
}


         	 		 	 	 	  	       	
