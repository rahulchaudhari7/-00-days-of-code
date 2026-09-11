#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={100,4,200,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxLength=0;
    for(int i=0;i<n;i++){
        int currentNum=arr[i];
        int currentLength=1;
        while(find(arr,arr+n,currentNum+1)!=arr+n){
            currentNum++;
            currentLength++;
        }
        maxLength=max(maxLength,currentLength);
    }
    cout<<maxLength<<endl;
    return 0;
}