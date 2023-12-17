#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    sum+=a[i];
}
cout<<sum;
    return 0;
}
#include<iostream>
using namespace std;
int s(int n, int a[1000],int sum=0){
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
int n;
cin>>n;
int a[1000];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<s(n,a);
    return 0;
}