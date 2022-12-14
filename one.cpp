#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,5>ar{10,20,30,40,50};
for(int i=0;i<ar.size();i++){
    cout<<ar.at(i)<<endl;
    cout<<ar[i]<<endl;
}
ar[0]=5;
cout<<"Value is changed "<<endl;
for(auto i=ar.begin();i!=ar.end();i++){
cout<<ar[i]<<endl;
}
return 0;
}