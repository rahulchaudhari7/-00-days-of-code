#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {3, 0, 0, 2, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int totalWater = 0;
    for(int i = 0; i < n; i++){
        int leftMax = 0;
        int rightMax = 0;
        for(int j = 0; j <= i; j++){
            leftMax = max(leftMax, arr[j]);
        }
        for(int j = i; j < n; j++){
            rightMax = max(rightMax, arr[j]);
        }
        int waterLevel = min(leftMax, rightMax);
        totalWater += waterLevel - arr[i];
    }
    cout << "Total trapped rainwater: " << totalWater << " units" << endl;
    return 0;
}