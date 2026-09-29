#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = -1;
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                peak = arr[i];
                break;
            }
        }
        else if(i==n-1){
            if(arr[i]>arr[i-1]){
                peak = arr[i];
                break;
            }
        }
        else{
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                peak = arr[i];
                break;
            }
        }
    }
    if(peak != -1)
        cout << "Peak element: " << peak;
    else
        cout << "No peak element found";

    return 0;
}