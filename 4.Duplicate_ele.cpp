// Ayush Bhardwaj :)
// Date : 14-03-2023
// time : 11:22

#include<iostream>
using namespace std;

// input ARRAY
void inputarr(int n,int arr[10]){
    cout<<"enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
// SERCHING DUPLICATE

void duplicate(int n, int arr[]){
    int flag = 0 ;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag++;
                cout<<arr[i];
                break;
            }
        }
        cout<<endl;
    }

    if (flag != 0){
        cout<<"the array contains duplicate element:"<<endl;
    }
    
}

int main(){
    int  n;
    int arr[10];
    cout<<"enter the size of the array :";
    cin>>n;
    inputarr(n,arr);
    duplicate(n,arr);
    
    return 0;
}

