#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;

    int x;
    int z=0,f=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0){
            z++;
        }else if(x==5){
            f++;
        }
    }



    if(z==0){
        cout<<"-1";
    }else if(f<9){
        cout<<"0";
    }else{

        f = f - f%9;
        for(int i=0;i<f;i++){
            cout<<"5";
        }

       for(int i=0;i<z;i++){
            cout<<"0";
        }

    }


    return 0;
} 

