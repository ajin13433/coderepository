#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
  int s,t,a,b,x=0,y=0;
    cin>>s>>t>>a>>b;
    if(t%4!=0)
    t=t%4;
    else
    t=4;
    if(b>a){
            for(int j=1;j<=t;j++){
        if(j%2==0){
            x=abs(x-s);
             b=b-(x-a);
            a=x;
        }
        else{
            y=abs(y-s);
             a=a+(y-b);
             b=y;
        }
     if((a==0||a==s)&&(b==0||b==s))
            break;}
    cout<<a<<" "<<b<<endl;
}
    else{
    for(int j=1;j<=t;j++){
        if(j%2!=0){
            x=abs(x-s);
             b=b+(x-a);
            a=x;
        }
        else{
            y=abs(y-s);
             a=a-(y-b);
             b=y;
        }
     if((a==0||a==s)&&(b==0||b==s))
            break;}
    cout<<a<<" "<<b<<endl;
}}
return 0;
}
