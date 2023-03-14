//Ayush Bhardwaj :)
// date : 13-02-23
// time : 20:39
// ---------------------Reverse The Array-----------------------
#include<iostream>
using namespace std;

// taking input in array

void inputarr(int n,int arr[10]){
    cout<<"enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

// swaping of two numbers 

int swap(int &a,int &b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    
    return 0;
}

//reversing the element of an array

void arrrev(int n, int arr[10]){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }

}

// output array

void outputarr(int n,int arr[]){
    cout<<"the array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n ;
    int arr[10];
    cout<<"enter the size of the array :";
    cin>>n;
    inputarr(n,arr);
    arrrev(n,arr);
    outputarr(n,arr);
    return 0;
}