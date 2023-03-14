// Ayush Bhardwaj
// Date :13-03-23
// time : 20:28
// -----------------MAX and MIN element in an array-------------
#include<iostream>
using namespace std;

// taking input array

void inputarr(int n,int arr[10]){
    cout<<"enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

// finding the max element in array

int max(int n, int arr[]){
    int maxele = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxele){
            maxele =arr[i];
        }
    }
    return maxele;
}


// finding the max element in array

int min(int n, int arr[]){
    int minele = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minele){
            minele=arr[i];
        }
    }
    return minele;
}

int main(){
    int n ;
    int arr[10];
    cout<<"enter the size of the array :";
    cin>>n;
    inputarr(n,arr);
    int maxelement = max(n ,arr);
    int minelement = min(n,arr);
    cout<<"the max element is :"<<maxelement<<endl;
    cout<<"the minimum element is :"<<minelement<<endl;
    return 0;
}