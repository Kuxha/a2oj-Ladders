#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n,m;
    cin>>n>>m;
    int a[m];

    for(int i=0;i<m;i++){
        cin>>a[i];
    }
   
    
    long long sum = 0;
     sum += a[0] - 1;
     for(int i=1;i<m;i++) {
        
        if (a[i] >= a[i - 1]) {
                sum += a[i] - a[i - 1];
        } else {
                sum += (n - a[i - 1]) + a[i];
        }
         
 
    }
    
    cout<<sum;
    return 0;
} 
 