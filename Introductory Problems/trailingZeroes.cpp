#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;
int main(){
    ll n;
    cin>>n;
    ll counter = 0;
    ll divider = 5;
    while((n/divider)>0){
        counter += n/divider;
        divider *= 5;
    }
    cout<<counter;
}
