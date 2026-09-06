#include<iostream>
using namespace std;

int main(){
    int arr[]={10,9,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=13;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"Pair found: ("<<arr[i]<<", "<<arr[j]<<")"<<endl;
                return 0;
            }
        }
    }
    cout<<"No pair found"<<endl;
    return 0;
}