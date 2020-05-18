#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    priority_queue <int> maxh;
    priority_queue <int, vector<int>, greater<int> > minh; 

    int n,m;
    cin>>n>>m;
    int n2 = n;
    int a;
    for(int i=0;i<m;i++){

        cin>>a;
        minh.push(a);
        maxh.push(a);
    }

    int x=0,y=0;
    int seats;
    while(n>0){
        seats  = maxh.top();
        maxh.pop();
        x = x + seats;
        seats--;
        
        n--;
        if(seats!=0){
            maxh.push(seats);
        }
    }

    n = n2;

    while(n>0){
        seats  = minh.top();
        minh.pop();
        y = y + seats;
        seats--;
        
        n--;
        if(seats!=0){
            minh.push(seats);
        }
    }

    cout<<x<<" "<<y;
    return 0;
} 
 