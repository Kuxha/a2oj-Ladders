#include<bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int a[d]={0};
    for(int i=0;i<d;i++){

        if((i+1)%k==0){
            a[i]=1;
        }

        if((i+1)%l==0){
            a[i]=1;
        }

        if((i+1)%m==0){
            a[i]=1;
        }

        if((i+1)%n==0){
            a[i]=1;
        }

     }

    int ans = 0;
    for(int i=0;i<d;i++){

        if(a[i]==1){
            ans++;
        }
  
     }

 
     cout<<ans;


    return 0;
} 

