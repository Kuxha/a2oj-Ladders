#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int n;
    cin>>n;
    int col = n*2+1;
    int spaces = 0;
   	for(int i=0;i<=col/2;i++){
   		spaces = (n-i)*2;
   		for(int j=0;j<spaces;j++){
   			cout<<" ";
   		}

   		for(int j=0;j<i;j++){
   			cout<<(j)<<" ";
   		}

   		for(int j=i;j>0;j--){
   			cout<<(j)<<" ";
   		}

   		cout<<"0\n";
   	}
  


    for(int i=(col/2)-1;i>=0;i--){
   		spaces = (n-i)*2;
   		for(int j=0;j<spaces;j++){
   			cout<<" ";
   		}

   		for(int j=0;j<i;j++){
   			cout<<(j)<<" ";
   		}

   		for(int j=i;j>0;j--){
   			cout<<(j)<<" ";
   		}

   		cout<<"0\n";
   	}
    return 0;
} 
 