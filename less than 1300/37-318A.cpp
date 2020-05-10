#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

            long n,k;
            cin>>n>>k;
            long even = 0;
 
            if (n % 2 == 0) {
                even = n / 2 + 1;
            } else {
                even = (n + 1) / 2 + 1;
            }
            
 
            long ans = 0;
 
            if (k >= even) {
 
                k = k - even + 1;
                ans = k * 2;
            } else {
 
                ans = k * 2 - 1;
            }
 
            cout<<ans;
    return 0;
} 

