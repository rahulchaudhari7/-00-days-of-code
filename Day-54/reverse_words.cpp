#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string word = "";
    string result = "";

    for(int i = 0; i <= str.length(); i++){

        if(i == str.length() || str[i] == ' '){

            if(word != ""){
                result = word + " " + result;
                word = "";
            }

        }else{
            word += str[i];
        }
    }

    cout << "Reversed sentence: " << result;

    return 0;
}