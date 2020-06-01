#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
//#define for(i,n) for(i=0;i<n;i++);
#define sort(a) sort(a.begin(),a.end());

int main(){
    ll n,x,i;
    cin>>n>>x;
    vector<ll> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    //sort(v);
    bool flag = false;
    for(i=0;i<n ;i++){
        //cout<<v[i]<<endl;
        ll j=i+1;
        while(j<n ){
            //cout<<v[i]<<" "<<v[j]<<endl;
            if(v[i]+v[j]==x){
                flag=true;
                cout<<i+1<<" "<<j+1;
                return 0;
            }
            j++;
        }
    }
    cout<<"IMPOSSIBLE";

}
