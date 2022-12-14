#include<iostream>
#include<array>
using namespace std;
int main(){
cout<<"Enter 10 elements : "<<endl;
array<int,10> obj1;
for(int i=0;i<10;i++){
cin>>obj1[i];
}
int i=obj1.front();
int j=obj1.back();
cout<<"First and last element is "<<i<<" and "<<j;
cout<<"\nFirst and last element is "<<obj1[0]<<" and "<<obj1[obj1.size()-1];
int *ii=obj1.begin();
int *ij=obj1.end()-1;
cout<<"\n"<<*ii;
cout<<"\n"<<*ij;

return 0;
}