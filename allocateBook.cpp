// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=0

#include <bits/stdc++.h>

bool isPossible(vector<int> arr, int n, int m,int mid){
    int numPages=0,studentCount=1;
    for(int i=0;i<n;i++){
        if(numPages+arr[i]<=mid){
            numPages+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            numPages=arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s=0;
    int e=0;
    for(int i=0;i<n;i++){
        e+=arr[i];
    }
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }   
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;;
    }
    return ans;
}