#include<bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;

    int a[n];

    int min = 1000,max = -1,mini = 0,maxi =0;

    for(int i=0;i<n;i++){

        cin>>a[i];

        if(a[i]<min){
     
            min = a[i];
        }
        if(a[i]>max){

            max = a[i];
        }
    }


    for(int i=0;i<n;i++){

        if(a[i]==max){
            maxi = i;
            break;
        }
    }



    for(int i=n-1;i>=0;i--){

        if(a[i]==min){
            mini = i;
            break;
        }
    }

    
    if(maxi<mini){

        cout<<(maxi + n - mini -1);

    }else{
        cout<<(maxi + n - mini -2);
    }
 



    return 0;
} 

