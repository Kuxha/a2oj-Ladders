#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;
    
    int w[7];
    for(int i=0;i<7;i++){
        cin>>w[i];
    }

    bool flag = true;
    int ans = 0;
    while(flag){
    
        for(int i=0;i<7;i++){
            //cout<<" n = "<<n;
            n = n - w[i];

             //cout<<" n  after = "<<n<<endl;

            if(n<=0){
                ans = i+1;
                flag = false;
                break;
            }
        }

    }

    

    cout<<ans;


    return 0;
} 

