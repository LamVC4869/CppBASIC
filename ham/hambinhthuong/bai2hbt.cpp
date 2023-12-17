#include<iostream>
using namespace std;
void haha(){
    for(int i=0;i<=100;i++){
        if(i%3==0 && i%5!=0){
            cout<<" "<<i;
        }
    }
}
int main(){
    haha();
    return 0;
}