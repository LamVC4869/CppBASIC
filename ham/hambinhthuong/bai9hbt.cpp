#include<iostream>
using namespace std;
void s(int n, string a[1000]){
    for(int i=0;i<n;i++){
        if(a[i].size()>=3){
cout<<" "<<a[i];
        }
    }
}
int main(){
int n;
cin>>n;
string a[1000];
for(int i=0;i<n;i++){
    cin>>a[i];
}
s(n,a);
    return 0;
}