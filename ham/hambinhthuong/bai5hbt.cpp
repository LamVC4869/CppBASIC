#include<iostream>
using namespace std;
void ok(int n, int a[1000]){
    for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
    if(a[i]<a[j]){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
    }
}
int main(){
int n;
int a[1000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
ok(n,a);
for(int i=0;i<n;i++){
    cout<<" "<<a[i];
}
    return 0;
}