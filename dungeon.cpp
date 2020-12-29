#include<iostream>
using namespace std;
int main(){
int n,t=0;
cin>>n;
int a[3];
for(int i=0;i<n;i++){
  for(int j=0;j<3;j++){
    cin>>a[j];
    t=t+a[j];
  }
if(t%9==0)
    cout<<"YES"<<endl;
else{
    cout<<"NO"<<endl;
}
}

return 0;
}
