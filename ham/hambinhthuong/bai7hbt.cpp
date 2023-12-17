#include<iostream>
using namespace std;
int m(int n, int a[1000]){
    int max = a[0];
for(int i=0;i<n;i++){
if(a[i]>max){
    max=a[i];
}
}
return max;
}
int main(){
int n1,n2;
int a1[1000],a2[1000];
cin>>n1;
for(int i=0;i<n1;i++){
cin>>a1[i];
}
cin>>n2;
for(int i=0;i<n2;i++){
    cin>>a2[i];
}
cout<<m(n1,a1)<<endl<<m(n2,a2);
    return 0;
}