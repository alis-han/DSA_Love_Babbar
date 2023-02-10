#include<iostream>
using namespace std;

int maxArray(int arr[],int size){
    int maxi= INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int minArray(int arr[],int size){
    int mini= INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}

int main(){
    int arr[5]={5,4,8,-2,1};
    cout<<"Maximum Number is:"<<maxArray(arr,5)<<endl;
    cout<<"Minimum Number is:"<<minArray(arr,5)<<endl;
}