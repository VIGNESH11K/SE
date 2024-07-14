#include<stdio.h>
#include<iostream>
#include<climits>

using namespace std;

int main(){
    cout<<"Enter the array size"<<endl;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int maxNo=INT_MAX;
    int minNo=INT_MIN;

    for(int i=0;i<n;i++){
       maxNo=max(maxNo,arr[i]);
       minNo=min(minNo,arr[i]);
    
    }
    return 0;

}