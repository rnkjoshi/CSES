#include<iostream>
using namespace std;

int main(){
  long long int n;
  cin>>n;
  if(n==1){
  cout<<"1";
  return 0;
  }
  do{
    cout<<n<<" ";
    if(n%2==0){
    n/=2;}
    else{
    n=n*3+1;
  }

  }while(n!=1);
  cout<<"1";
}
