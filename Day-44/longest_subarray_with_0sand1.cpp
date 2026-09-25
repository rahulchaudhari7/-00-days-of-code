#include<iostream>
using namespace std;

int main(){

    int arr[]={0, 0, 1, 0, 0, 0, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int MaxLength = 0;

    for(int i = 0; i < n; i++){
        int zeros = 0;
        int ones = 0;
        for(int j = i; j < n; j++){

            if(arr[j] == 0)
                zeros++;
            else
                ones++;
            if(zeros == ones){
                int length = j - i + 1;
             if(length > MaxLength){
                    MaxLength = length;
                }
            }
        }
    }
    cout << "Longest subarray length: " << MaxLength;
    return 0;
}
