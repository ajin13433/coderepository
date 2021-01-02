#include<iostream>
using namespace std;
int main(){
    string s="abcdefghijklmnop";
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
    int y;
    cin>>y;
    string a;
    cin>>a;
    int i=0;
    for(int k=1;k<=y/4;k++){
int m;
int ki=0,ke=16,n=16;
while(n!=1&&i<y){
    if(a[i]=='1'){
        ki=ki+ n/2;
        ke=ki+n/2;
    }
    else{
        ke=ke- n/2;
        ki=ke- n/2;
    }
    n=n/2;
    i++;
}
  m=ki;
cout<<s[m];
}
cout<<endl;
}
return 0;
}
