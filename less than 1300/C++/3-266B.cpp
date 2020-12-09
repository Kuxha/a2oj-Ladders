#include<bits/stdc++.h>
#define FOR(i,start,n) for(i=start;i<n;i++)
using namespace std;
int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

	int n,t,i;
	cin>>n>>t;
	string s;
	cin>>s;

	while(t--)
		FOR(i,0,n){
			
			if(s[i]=='B' && s[i+1]=='G'){
				swap(s[i],s[i+1]);
				i++;
			}
		}	

	cout<<s;
	return 0;
} 

