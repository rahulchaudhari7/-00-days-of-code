#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int MinElement=arr[0];
    int MaxDifference=INT_MIN;
    for(int i=0;i<n;i++){
        int diff = arr[i]-MinElement;
        if(diff>MaxDifference){
            MaxDifference = diff;
        }
        if(arr[i]<MinElement){
            MinElement= arr[i];
        }
    }
    cout<<"Maximum difference is :"<<MaxDifference;
    return 0;
}