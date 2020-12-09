#include<bits/stdc++.h>
using namespace std;



int main() { 

  
    int a[5][5];
    for(int i=0;i<5;i++){
    	for(int j=0;j<5;j++){

    		cin>>a[i][j];
    	}
    }

    int i[5] = {0,1,2,3,4};

    int ans = 0;

    do{
    	int temp = 0;


    	temp += a[i[1]][i[2]] + a[i[2]][i[1]]+a[i[0]][i[4]]+a[i[4]][i[0]];
    	temp += a[i[0]][i[2]] + a[i[2]][i[0]]+a[i[4]][i[3]]+a[i[3]][i[4]];
    	temp += a[i[0]][i[4]] + a[i[4]][i[0]];
    	temp += a[i[4]][i[3]] + a[i[3]][i[4]];

    	ans = max(ans,temp);

    }while(next_permutation(i,i + 5));
    

    cout<<ans;
} 
 