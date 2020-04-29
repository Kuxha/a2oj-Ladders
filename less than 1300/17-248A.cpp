#include<bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;

    int l1=0,l0=0,r1=0,r0=0;
    int a,b;
    for(int i=0;i<n;i++){


        cin>>a>>b;

        if(a){
            l1++;
        }else{
            l0++;
        }
        if(b){
            r1++;
        }else{
            r0++;
        }

    }

    cout<<(min(l0,l1)+min(r0,r1));
    return 0;
} 

