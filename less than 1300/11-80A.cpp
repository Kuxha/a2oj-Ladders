#include<bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int a[] = {2, 2, 3, 5, 5, 7, 7, 11, 11, 11, 11, 13, 13, 17, 17, 17, 17, 19, 19, 23, 23, 23, 23, 29, 29, 29, 29, 29, 29, 31, 31, 37, 37, 37, 37, 37, 37, 41, 41, 41, 41, 43, 43, 47, 47, 47, 47, 53, 53, 53, 53, 53, 53};
    int n,m;
    cin>>n>>m;

    //here a[m] is basically the next prime number of m
    // next prime of 0 is 2, 1 is 2 , 2 is 3, 3 is 5,4 is 5, 5 is 7 .. and so on

    if(m==a[n]){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
} 

