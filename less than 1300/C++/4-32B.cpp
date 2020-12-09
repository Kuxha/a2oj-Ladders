#include<bits/stdc++.h>
#define FOR(i,start,n) for(i=start;i<n;i++)
using namespace std;
int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

	string s;
	cin>>s;
	int n = s.length(),i;

	string ans = "";
	FOR(i,0,n){
		if(s[i]=='.'){
			ans = ans + '0';
		}else{
			if(s[i+1]=='-'){
				ans = ans + '2';
			}else{
				ans = ans + '1';
			}
			i++;
		}
	}	

	cout<<ans;
	return 0;
} 

