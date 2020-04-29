#include<bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;

    float ans = 0;
    float a;
    for(int i=0;i<n;i++){

        cin>>a;

        ans +=a;
    }

    cout<<(ans/(n));

 



    return 0;
} 

