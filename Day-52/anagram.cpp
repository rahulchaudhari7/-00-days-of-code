#include<iostream>
#include<string>
using namespace std;

int main(){

    string str1 = "listen";
    string str2 = "silent";

    if(str1.length() != str2.length()){
        cout << "The strings are not anagrams";
        return 0;
    }

    int count[26] = {0};

    for(int i = 0; i < str1.length(); i++){
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            cout << "The strings are not anagrams";
            return 0;
        }
    }

    cout << "The strings are anagrams";

    return 0;
}