#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,5>ar{10,20,30,40,50};
int i1=0;
for(auto i=ar.begin();i!=ar.end();i++){
i1++;
}
cout<<"Length is "<<i1<<endl;
cout<<"Length using direct function "<<ar.size()<<endl;
return 0;
}