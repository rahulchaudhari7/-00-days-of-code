#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int majorityElement = arr[0];
    int count = 0;
    for(int i = 0; i < n; i++){
        if(count == 0){
            majorityElement = arr[i];
        }
        if(arr[i] == majorityElement){
            count++;
        }
        else{
            count--;
        }
    }
    count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == majorityElement){
            count++;
        }
    }
    if(count > n / 2){
        cout << "The majority element is : "
             << majorityElement << endl;
    }
    else{
        cout << "No majority element found in the given array." << endl;
    }
    return 0;
}
