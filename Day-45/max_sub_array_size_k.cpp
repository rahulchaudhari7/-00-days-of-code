#include<iostream>
using namespace std;

int main(){
    int arr[]={2, 1, 5, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;
    int maxsum = 0;
    for(int i=0;i<=n-k;i++){
        int sum = 0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        if(maxsum<sum){
            maxsum = sum;
        }
    }
    cout<<"maximum sub array of size k is :"<<maxsum;
    return 0;
}