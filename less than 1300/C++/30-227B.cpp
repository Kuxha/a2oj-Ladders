

#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;

    long a[n];
    long index[100001];

    for(int i=0;i<n;i++){
        cin>>a[i];
        index[a[i]]=i+1;
    }


    int q;
    cin>>q;


    int num;
    long long v=0,p=0;

    for(int i=0;i<q;i++){
        cin>>num;
        v = v+index[num];
        p = p+(n-index[num])+1;
    }


    cout<<v<<" "<<p;


    return 0;

} 


