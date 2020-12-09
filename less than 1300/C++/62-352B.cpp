#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int n,a;
    cin>>n;
    int count = 0;
    map<int,int> d,index;

    for(int i=0;i<n;i++){
    	cin>>a;
    	if(d[a]==0){ // means this is first time we encounter a
    		d[a]=-1; // signifies that a now exists
    		index[a]=i;

    	}else if(d[a]==-1){
    		//means this is second time we encounter a
    		// so here we'll get value of d

    		d[a] = i - index[a];
    		index[a] = i;


    	}else if(d[a]!=-2){
    		if(i-index[a]!=d[a]){
    			d[a] = -2;
    			count++;

    			//so d[a] = 2 , means it should not be counted
    			//so count++ will be removed

    		}

    		index[a] = i;
    	}
    }

    cout<<d.size()-count<<"\n";
    for(auto i:d){
    	if(i.second == -1){
    		// this means there's only one such number
    		cout<<i.first<<" "<<0<<"\n";
    	}else if(i.second!=-2){
    		cout<<i.first<<" "<<i.second<<"\n";
    	}
    }

    return 0;
} 
 