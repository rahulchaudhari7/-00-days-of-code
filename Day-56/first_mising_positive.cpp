#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int answer = 1;

    while(true){
        bool found = false;
        for(int i = 0; i < n; i++){
            if(arr[i] == answer){
                found = true;
                break;
            }
        }
        if(!found){
            cout << "First missing positive number: " << answer;
            break;
        }
        answer++;
    }
    return 0;
}