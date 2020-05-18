#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;
int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int s,n,x,y;
    cin>>s>>n;

    for(int i=0;i<n;i++){

    	cin>>x>>y;
    	v.push_back({x,y});
    }

    sort(v.begin(),v.end());

    for(auto &it:v){
    	if(s>it.first){
    		s +=it.second;
    	}else{
    		cout<<"NO";
    		return 0;
    	}
    }

    cout<<"YES";

    return 0;
} 
 