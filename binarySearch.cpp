#include<iostream>
using namespace std;

int binary(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};
    int index=binary(even,6,5);
    int index2=binary(odd,5,2);
    cout<<"Index of 5 in even is: "<<index<<endl;
    cout<<"Index of 2 in even is: "<<index2<<endl;
}