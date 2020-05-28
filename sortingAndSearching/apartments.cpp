#include<bits/stdc++.h>
typedef signed long long int ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("data.txt","r",stdin);
        ll n,m,k,temp;
        cin>>n>>m>>k;
        vector<ll> apartments,requirement;
        for(ll i=0;i<n;i++){
            cin>>temp;
            apartments.push_back(temp);
        }
        for(ll i=0;i<m;i++){
            cin>>temp;
            requirement.push_back(temp);
        }
        sort(apartments.begin(),apartments.end());
        sort(requirement.begin(),requirement.end());
        ll x=0,y=0,counter=0;
        while(x<n && y<m){
            if(apartments[x] + k < requirement[y])
                x++;
            else if(apartments[x] - k > requirement[y])
                y++;
            else{
                counter++;
                x++;
                y++;
            }
        }
        cout<<endl<<counter<<endl;
}
