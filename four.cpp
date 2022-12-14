#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main(){
array<int,5>arr{10,20,30,40,50};
int i=arr[4];//first way
int j=arr.at(2);
int k=get<0>(arr);      
cout<<"Values are "<<i<<" "<<j<<" "<<" "<<k;
    return 0;
}