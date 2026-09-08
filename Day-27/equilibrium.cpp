#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int totalSum = 0;
    int leftSum = 0;
    bool found = false;
    for(int i = 0; i < n; i++){
        totalSum += arr[i];
    }
    for(int i = 0; i < n; i++){
        int rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum){
            cout << "Equilibrium point found at index " << i << endl;
            found = true;
            break;
        }
        leftSum += arr[i];
    }
    if(!found){
        cout << "No equilibrium point found." << endl;
    }
    return 0;
}