#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    char ch;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter character to remove: ";
    cin >> ch;

    string result = "";

    for(int i = 0; i < str.length(); i++){

        if(str[i] != ch){
            result += str[i];
        }
    }

    cout << "String after removing character: " << result;

    return 0;
}