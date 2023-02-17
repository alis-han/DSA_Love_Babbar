#include<iostream>
using namespace std;

int peak(int arr[],int size){
    int start=0,end=size-1,mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int main(){
    int arr[4]={1,5,3,4};
    int location=peak(arr,4);
    cout<<"PEak Element in Array is at Index "<<location<<" that is "<<arr[location];
}