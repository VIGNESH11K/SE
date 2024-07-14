#include<stdio.h>
#include<iostream>
using namespace std;

int binarySearch(int arr[] ,int n,int key){

    int start=0;
    int end=n;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }

        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }return -1;
                      

}

int main(){
    cout<<"Enter the Array size"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the array"<<endl;
    int arr[n];
     
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter key"<<endl;
    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key)<<endl;


return 0;

}