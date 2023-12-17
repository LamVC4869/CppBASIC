
#include<iostream>
using namespace std;
void haha(string name){
    cout<<"Hello"<<" "<<name;
}
int main(){
    string name;
    cin>>name;
    haha(name);
    return 0;
}
#include<iostream>
using namespace std;
void haha(){
    string name;
    cin>>name;
    cout<<"Hello"<<" "<<name;
}
int main(){
    haha();
    return 0;
}