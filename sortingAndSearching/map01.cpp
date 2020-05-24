#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
int main(){
    map<ll,ll> mymap;
    ll n,temp;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>temp;
        mymap.insert(pair<ll,ll>(temp,i));
    }
    map<ll,ll>::iterator itr;
    /*for(itr = mymap.begin();itr!=mymap.end();++itr){
        cout<<itr->first<<" "<<itr->second<<endl;
    }*/
    cout<<mymap.size();

}
