#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    int a,b,c,d;
    cin>>a>>b>>c>>d;
 
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
 
    
 
    cout<<(4-s.size());
 
    return 0;
}