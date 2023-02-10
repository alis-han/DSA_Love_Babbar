#include<iostream>
using namespace std;

bool isPresent(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[100];
    cout<<"Enter the size of Array: "<<endl;
    int size;
    cin>>size;
    // TAking INPUT...
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search: "<<endl;
    int key;
    cin>>key;

    if(isPresent(arr,size,key))
        cout<<"Element FOUND in Array."<<endl;
    else
        cout<<"Element NOT Found in array."<<endl;
}