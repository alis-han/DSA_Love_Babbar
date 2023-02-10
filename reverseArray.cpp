#include<iostream>
using namespace std;

// REVERSING the Array...
int reverse(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

// PRINTING the Array...
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// MAIN Function...
int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={1,2,3,4,5};

    reverse(arr,6);
    printArray(arr,6);
    reverse(brr,5);
    printArray(brr,5);
}