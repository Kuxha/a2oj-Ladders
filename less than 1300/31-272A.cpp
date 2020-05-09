/*

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n;
    cin>>n;
    int a[n];
    int s = 0;

    for(int i=0;i<n;i++){
       cin>>a[i];
       s +=a[i];
    }

    int ans = 0;
    n++;
    for(int i=1;i<=5;i++){
        if((s+i)%n==1){
            ans++;
        }
    }

    cout<<(5-ans);
    return 0;

} 


__________________________________________________

*/


//A better solution using dequeue




#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n,m,x,i;
    cin>>n>>m;
    
    deque<pair<int,int>> d;
    for(i=0;i<n;i++){
        cin>>x;
        d.push_back(make_pair(x,i+1));

    }

    while(!d.empty()){
        x = d.front().first;
        i = d.front().second;
        d.pop_front();
        if(x>m){
            d.push_back(make_pair(x-m,i));
        }

    }


    cout<<i;


} 


