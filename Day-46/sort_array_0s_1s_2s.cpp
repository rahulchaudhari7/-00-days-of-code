#include<iostream>
using namespace std;

int main(){

    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0)
            count0++;
        else if(arr[i] == 1)
            count1++;
        else
            count2++;
    }
    int index = 0;
    while(count0 > 0){
        arr[index] = 0;
        index++;
        count0--;
    }
    while(count1 > 0){
        arr[index] = 1;
        index++;
        count1--;
    }
    while(count2 > 0){
        arr[index] = 2;
        index++;
        count2--;
    }
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}