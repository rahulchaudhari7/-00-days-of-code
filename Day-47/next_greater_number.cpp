#include<iostream>
using namespace std;

int main(){

    int arr[] = {4, 5, 2, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Next Greater Elements: ";

    for(int i = 0; i < n; i++){

        int nextGreater = -1;

        for(int j = i + 1; j < n; j++){

            if(arr[j] > arr[i]){
                nextGreater = arr[j];
                break;
            }
        }

        cout << nextGreater << " ";
    }

    return 0;
}