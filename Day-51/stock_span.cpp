#include<iostream>
#include<stack>
using namespace std;

int main(){
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices) / sizeof(prices[0]);

    int span[n];
    stack<int> st;

    for(int i = 0; i < n; i++){

        while(!st.empty() && prices[st.top()] <= prices[i]){
            st.pop();
        }
        if(st.empty()){
            span[i] = i + 1;
        }else{
            span[i] = i - st.top();
        }

        st.push(i);
    }

    cout << "Stock Span: ";

    for(int i = 0; i < n; i++){
        cout << span[i] << " ";
    }

    return 0;
}