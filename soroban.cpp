#include<iostream>
using namespace std;
int main(){
string n;
cin>>n;
int t = n.size();
for(int i=t-1;i>=0;i--){
string id = "-OOOO";
string gd = "O-|";
    if(n[i]>='5'){
        gd="-O|";
        n[i]=n[i]-5;
        }
    if(n[i]=='1')
        id="O-OOO";
      else if(n[i]=='2')
        id="OO-OO";
         else if(n[i]=='3')
        id="OOO-O";
         else if(n[i]=='4')
        id="OOOO-";
    cout<<gd+id<<endl;
}
return 0;
}

