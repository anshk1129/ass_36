#include<iostream>
#include<array>
using namespace std;
int cal(array<int ,7> a);
int main(){
    array<int,7> ar={1,1,22,3,4,4,22};
    int result=cal(ar);
    cout<<"Integer which occur one time is "<<result<<endl;
return 0;
}
int cal(array<int ,7> a){
int r=a[0];
for(int i=1;i<a.size();i++){
    r=r^a[i];
}
return r;
}