#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int i=1;
while(b>0){
    i*=a;
    b--;
}cout<<i;
    return 0;
}