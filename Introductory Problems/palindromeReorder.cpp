#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;
int main(){
    string s;
    cin>>s;
    pair<int,char> occurance[26];
    for(int i =0;i<26;i++)
        occurance[i].second = 65+i;
    for(int i = 0 ;i<s.size();i++){
        occurance[int(s[i])-65].first++;
    }
    sort(occurance,occurance+26);
    int odds=0;
    for(int i = 25;i>=0;i--)
      if(occurance[i].first%2!=0)
            odds++;
    if(odds > 1){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    //cout<<occurance[i].first<<" "<<char(occurance[i].second)<<endl;
    string newString ="";
    bool flag=true;
    for(int i=25;i>=0 ;i--){
        //cout<<"test 1\n";
        if(occurance[i].first%2==0 && occurance[i].first!=0){
            for(int j=0;j<occurance[i].first/2;j++)
                newString += occurance[i].second;
            occurance[i].first /= 2 ;
        }
        else{
            for(int j=0;j<occurance[i].first;j++)
                newString += occurance[i].second;
            occurance[i].first=0;
        }
    //cout<<"test 2\n";
    }
    //cout<<"PART 2\n";
    for(int i=0;i<26 ;i++){
        //cout<<"test 3\n";
        if(occurance[i].first%2==0 && occurance[i].first!=0){
            for(int j=0;j<occurance[i].first/2;j++)
                newString += occurance[i].second;
            occurance[i].first /= 2 ;
        }
        else{
            for(int j=0;j<occurance[i].first;j++)
                newString += occurance[i].second;
            occurance[i].first=0;
        }
    //cout<<"test 4\n";
    }
    if(!flag){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    cout<<newString<<endl;
}
