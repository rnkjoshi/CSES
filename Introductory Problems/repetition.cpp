#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int counter=1,maxLength=0,n=s.size();
  for(int i=0;i<n;i++){
      if(s[i]==s[i+1]){
          counter++;
      }
      else{
          maxLength = maxLength<=counter ? counter : maxLength;
          counter=1;
      }
  }
  cout<<maxLength;
 }
