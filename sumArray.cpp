#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[100];
    cout<<"Enter the size of Array: "<<endl;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Sum of Array: "<<sum(arr,size);
}