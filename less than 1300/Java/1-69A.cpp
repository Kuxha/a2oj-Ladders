#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,y,z;
	int a = 0, b = 0, c = 0;
	while(n--){

		cin>>x;
		cin>>y;
		cin>>z;

		a = a + x;
		b = b + y;
		c = c + z;



	}

	if(a==0&&b==0&&c==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
	return 0;
} 
