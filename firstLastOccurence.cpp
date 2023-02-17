#include<iostream>
using namespace std;

int firstOccur(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccur(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[11]={1,2,2,5,6,7,7,7,3,3,7};
    cout<<"First Occurence of 7 is at Index "<<firstOccur(arr,11,7)<<endl;
    cout<<"Last Occurence of 7 is at Index "<<lastOccur(arr,11,7)<<endl;
    return 0;
}