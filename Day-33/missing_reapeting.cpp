#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int missing =-1;
    int repeating=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                repeating=arr[i];
                break;
            }
        }
        if(repeating!=-1){
            break;
        }
    }
    for(int i=1;i<=n;i++){
        bool found=false;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                found=true;
                break;
            }
        }
        if(!found){
            missing=i;
            break;
        }
    }
    cout<<"Missing number: "<<missing<<endl;
    cout<<"Repeating number: "<<repeating<<endl;
    return 0;
}