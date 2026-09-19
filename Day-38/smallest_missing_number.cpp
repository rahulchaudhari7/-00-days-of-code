#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,-1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int missing = 1;
    while(true){
        bool found = false;
        for(int i=0;i<n;i++){
            if(arr[i]==missing){
                found = true;
                break;
            }
        }
        if(!found){
            break;
        }
        missing ++;
    }
    cout<<"Smallest Missing value from the given array : "<<missing;
    return 0;
}