#include<iostream>
using namespace std;
int main(){
int n;
int i=1;
cin>>n;
while(i<=n) {
    if(n%i==0){
        cout<<" "<<i;
    }i++;
}
    return 0;
}