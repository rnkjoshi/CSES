#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll n,x,y;
    cin>>n;
    vector<pair<int,int> > res;
    while(n--){
        cin>>x>>y;
        res.push_back(make_pair(x,1));
        res.push_back(make_pair(y,0));
    }
    sort(res.begin(),res.end());
    int maximum = 0, current = 0;
    for(int i=0;i<res.size();i++){
        current += res[i].second==1?1:-1;
        maximum = maximum<current?current:maximum;
    }
    cout<<maximum;
}
