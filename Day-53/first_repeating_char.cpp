#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "programming";

    int count[256] = {0};

    for(int i = 0; i < str.length(); i++){
        count[str[i]]++;
    }

    for(int i = 0; i < str.length(); i++){
        if(count[str[i]] > 1){
            cout << "First repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No repeating character found";

    return 0;
}