#include<bits/stdc++.h>
typedef signed long long int ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("data.txt","r",stdin);
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
        ll lastone=0,counter=0;
        for(ll i=0;i<requirement.size();i++){
            bool flag=true;
            ll j=0;
            //cout<<"counting for "<<requirement[i]<<endl;
            while(flag){
                if(j == m)
                    break;
                if(apartments[j]==-1){
                    j++;
                    continue;
                }
                ll diff = apartments[j]-requirement[i] ;
                //cout<<diff<<" difference for = "<<apartments[j]<<endl;
                if((diff<=k && diff>=0) || (diff<=0 && diff>=(k)*(-1))){
                        //cout<<"found apartments "<<apartments[j]<<endl;
                    apartments[j]=-1;
                    counter++;
                    lastone = j ;
                    flag=false;
                }
                j++;
            }
        }
        cout<<endl<<counter<<endl;
}
