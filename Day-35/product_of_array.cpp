#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int n =sizeof(arr)/sizeof(arr[0]);
    int result[n];
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product*=arr[j];
            }
        }
        result[i]=product;
    }
    cout<<"The product of array elements except itself is: ";
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";   
    }
    return 0;
}