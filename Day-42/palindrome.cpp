#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bool ispalindrome = true;
    for(int i = 0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            bool ispalindrome = false;
            break;
        }
    }
    if(ispalindrome)
        cout<<"Array is Palindrome "<<endl;
    else
        cout<<"Array is not a palindrome "<<endl;
    
    return 0;

}