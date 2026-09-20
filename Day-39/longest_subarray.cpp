#include<iostream>
using namespace std;

int main(){
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxLength = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == 0){
                int length = j - i + 1;
                if(length > maxLength){
                    maxLength = length;
                }
            }
        }
    }
    cout << "Longest subarray with sum 0: " << maxLength << endl;
    return 0;
}