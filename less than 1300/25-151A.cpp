#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    double  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;


    double juice = (k*l)/nl;
    double limes = c*d;
    double salt = p/np;
    double ans = min(limes,salt);
    ans = min(ans,juice);
    ans = ans/n;
    cout<<(int)ans;

} 

