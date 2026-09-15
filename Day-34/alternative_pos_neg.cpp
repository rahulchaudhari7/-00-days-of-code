#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, -3, -4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result[n];
    int pos = 0;
    int neg = 0;
    int index = 0;
    while(pos < n && arr[pos] < 0){
        pos++;
    }
    while(neg < n && arr[neg] > 0){
        neg++;
    }
    while(pos < n && neg < n){
        result[index++] = arr[pos++];
        result[index++] = arr[neg++];
        while(pos < n && arr[pos] < 0)
            pos++;
        while(neg < n && arr[neg] > 0)
            neg++;
    }
    while(pos < n){
        if(arr[pos] > 0)
            result[index++] = arr[pos];
        pos++;
    }
    while(neg < n){
        if(arr[neg] < 0)
            result[index++] = arr[neg];
        neg++;
    }
    cout << "The alternative positive and negative elements are: ";
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}