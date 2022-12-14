#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,0>ar1{};
array<int,5>ar2{10,20,30,40,50};
array<int,5>ar3{10,20};
cout<<ar1.empty()<<endl;
cout<<ar2.empty()<<endl;
cout<<ar3.empty()<<endl;
return 0;
}