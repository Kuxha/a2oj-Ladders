#include<bits/stdc++.h>
using namespace std;
int main(){
 
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int n,i;
    cin>>n;
    int a,b,c,d,x;
    for(i=n+1;i<=10000;i++){
    	x = i;
 
    	a = x%10;
    	x = x/10;
 
    	b = x%10;
    	x = x/10;
 
    	c = x%10;
    	x = x/10;
 
    	d = x%10;
    	x = x/10;
 
    	if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
    		cout<<i;
    		return 0;
    	}
    }
 
 
	
	return 0;
} 