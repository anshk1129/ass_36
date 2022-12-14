#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,5>ar{10,20,30,40,50};
cout<<endl;
for(auto it=ar.rbegin();it!=ar.rend();it++){
    cout<<*it<<endl;
}
return 0;
}