

#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 


    int n;
    string a;

    int res = 0;

    cin>>n;

    for(int i=0;i<n;i++){
        
        cin>>a;
        if(a[0]=='+'||a[2]=='+'){
            res++;
        }
                if(a[0]=='-'||a[2]=='-'){
            res--;
        }


    }

    cout<<res;
    return 0;

} 

