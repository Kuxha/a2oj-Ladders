#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;
int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int n,m;
    cin>>n>>m;

    int f[m];
    for(int i=0;i<m;i++){
    	cin>>f[i];
    }

    sort(f,f+m);
    int diff = 100000;
    for(int i=0;i<=(m-n);i++){

    	diff = min(diff,f[i+n-1]-f[i]);
    	
    }

    
    cout<<diff;
    return 0;
} 
 