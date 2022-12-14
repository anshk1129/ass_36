#include<bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,7>arr{10,20,1,4,60,2,34};
     int a1=arr.size();
     sort(arr.begin(),arr.end(),greater<>());
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
     }
       
    return 0;
}