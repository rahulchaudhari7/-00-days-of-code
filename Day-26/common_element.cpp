#include<iostream>
using namespace std;

int main(){

    int arr1[] = {1,2,3,40,50,60,70};
    int arr2[] = {10,20,30,40,50};
    int arr3[] = {40,50,60,70,80};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    int i = 0, j = 0, k = 0;

    cout << "Common elements: ";

    bool found = false;

    while(i < n1 && j < n2 && k < n3){

        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            cout << arr1[i] << " ";
            found = true;

            i++;
            j++;
            k++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }

    if(!found){
        cout << "No common element found.";
    }

    cout << endl;

    return 0;
}