#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;

    string s;
    cin>>s;

    int v = ey-sy;
    int h = ex-sx;

    int time = 0;

    for(int i=0;i<t;i++){


        if(s[i]=='E' && abs(h-1)<abs(h)){

            h--;

        }else if(s[i]=='W' && abs(h+1)<abs(h)){

            h++;

        }else if(s[i]=='N' && abs(v-1)<abs(v)){

            v--;

        }else if(s[i]=='S' && abs(v+1)<abs(v)){

            v++;
        }


        time++;

        if(h == 0 && v ==0){
            break;
        }

    }


    if(h==0 && v==0){
        cout<<time;
    }else{
        cout<<-1;
    }



    
    return 0;
} 
 