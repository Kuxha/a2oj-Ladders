#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int n;
    cin>>n;
 
    int b[n];
 
    for(int i=0;i<n;i++){
    	cin>>b[i];
    }
 
    sort(b,b+n);
 
    long long c1 = 0;
    long long c2 = 0;
 
    for(int i=0;i<n;i++){
        if(b[i]==b[0]){
            c1++;
        }else if(b[i]==b[n-1]){
            c2++;
        }
    }
    //cout<<n<<" "<<b[n-1]<<" "<<b[0]<<"\n";
    cout<<(b[n-1]-b[0])<<" ";
    if(b[0]==b[n-1]){
        cout<<((c1*(c1-1))/2);
    }else{
        cout<<c1*c2;
    }
 
    return 0;
}