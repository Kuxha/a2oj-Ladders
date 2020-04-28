#include<bits/stdc++.h>
#define FOR(i,start,n) for(i=start;i<n;i++)
using namespace std;
int main(){
	int a,i,j,r,c;

	FOR(i,0,5){
		FOR(j,0,5){
			cin>>a;
			if(a){
				r = i;
				c = j;
			}


		}
	}

	cout<<abs(2-r)+abs(2-c);
	// subtract by 2 since we want minimum number of moves to bring it to the centre, which is at 2
	
	return 0;
} 