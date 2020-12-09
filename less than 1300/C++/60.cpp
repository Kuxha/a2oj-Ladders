#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int r,c;
    cin>>r>>c;

    char a[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            if((i+j)%2==0 && a[i][j]=='.'){
                a[i][j]='B';
            }

            if((i+j)%2!=0 && a[i][j]=='.'){
                a[i][j]='W';
            }
        }
    }


    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
} 
 