#include<iostream>
using namespace std;
int l(int n,int a[1000]){
    int count=0;
for(int i=0;i<n;i++){
    if(a[i]%2!=0){
count++;
    }
}
    return count;
}
int main(){
int n;
cin>>n;
int a[1000];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<l(n,a);
    return 0;
}