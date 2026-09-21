#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxProduct = arr[0];

    for(int i = 0; i < n; i++){
        int product = 1;

        for(int j = i; j < n; j++){
            product *= arr[j];

            if(product > maxProduct){
                maxProduct = product;
            }
        }
    }

    cout << "Maximum product subarray: " << maxProduct << endl;

    return 0;
}