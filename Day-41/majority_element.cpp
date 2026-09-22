#include<iostream>
using namespace std;

int main(){
    int arr[]={4,5,1,2,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int answer = -1;
     for(int i = 0; i < n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            answer = arr[i];
            break;
        }
    }
    if(answer != -1)
        cout << "First non-repeating element: " << answer << endl;
    else
        cout << "No non-repeating element found." << endl;
    
        
    return 0;
}