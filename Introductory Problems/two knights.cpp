#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long long int k,n=1;
    cin>>k;
    while(n<=k){
        long long int result=n * n * (n * n - 1) / 2;;
        //cout<<"temp result="<<result<<endl;
        long long int del =  2 * (n - 2) * (2 * (n - 4) + 6);
        cout<<result-del<<endl;
        n++;
    }
}
