#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout << "Enter a string: ";
    cin >> str;

    string result = "";
    int count = 1;

    for(int i = 1; i <= str.length(); i++){

        if(i < str.length() && str[i] == str[i - 1]){
            count++;
        }
        else{
            result += str[i - 1];
            result += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string: " << result;

    return 0;
}