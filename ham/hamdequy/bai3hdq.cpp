#include<iostream>
using namespace std;
int sum(int n, int a[1000]){
   if(n==1) return a[0]; 
   return a[n-1]+sum(n-1,a);
}
int main(){
int n;
cin>>n;
int a[1000];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<< sum(n,a);
    return 0;
}