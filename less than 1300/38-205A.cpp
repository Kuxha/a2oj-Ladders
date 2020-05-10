#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;
    long long a[n];
    long long min = 10000000000;
    int mini = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(min>a[i]){
            min = a[i];
            mini=i+1;
        }
    }

    int count = 0;

    for(int i=0;i<n;i++){
        if(a[i]==min){
            count++;       }
    }    

    if(count>1){
        cout<<"Still Rozdil";

    }else{
        cout<<mini;
    }

    return 0;
} 

