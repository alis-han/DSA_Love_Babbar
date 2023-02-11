#include<iostream>
using namespace std;

void alternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
} 

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={1,2,3,4,5};
    alternate(arr,6);
    print(arr,6);
    cout<<endl;
    alternate(brr,5);
    print(brr,5);

    return 0;
}