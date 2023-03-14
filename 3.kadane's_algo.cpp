// Ayush Bhardwaj :)
// Date : 13-03-2023
// time : 19:45
// --------------kadane's algo :---------------------
//                          (time _Complexity is O(n))
//      sum = 0;
//      maxi = arr[0];
//      sum = sum + arr[i];
//      maxi = maxi(maxi,sum)
//      if (sum<0)
//         sum =0;

#include<iostream>
using namespace std;

void inputarr(int n,int arr[10]){
    cout<<"enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int maxsubstr(int n,int arr[]){
    int sum =0;
    int maxi = arr[0];
    for(int i=0;i<n;i++){
        sum+= arr[i];
        maxi = max(maxi,sum);

        if(sum<0){
            sum =0;
        }
    }
    return maxi;
}

int main(){
    int n;
    int arr[10];
    cout<<"enter the size of the array  :";
    cin>>n;
    inputarr(n,arr);
    int var = maxsubstr(n,arr);
    cout<<"the max subarray is :"<<var<<endl;

    return 0;
}