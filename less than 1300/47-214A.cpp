#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n,m;
    cin>>n>>m;
    int ans = 0;
 
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) {
                    
            if (i * i + j == n) {
 
                if (i + j * j == m) {
                            ans++;
                }

            }
        }
    }

    cout<<ans;
    return 0;
} 
 