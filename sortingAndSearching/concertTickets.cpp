#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main(){
    ll totalTicket,totalPeople,temp;
    multiset<int,greater<int> > ticketsArr;
    cin>>totalTicket>>totalPeople;
    while(totalTicket--){
        cin>>temp;
        ticketsArr.insert(temp);
    }
    while(totalPeople--){
        cin>>temp;
        auto itr = ticketsArr.lower_bound(temp);
        if(itr == ticketsArr.end()){
            cout<<"-1\n";
        }
        else{
            cout<<*itr<<endl;
            ticketsArr.erase(itr);
        }
    }
}
