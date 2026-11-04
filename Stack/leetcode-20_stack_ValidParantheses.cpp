#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution{
    
public:
    bool isValid(string str) {
        // create stack
        stack<char> st;
        // checking all possible scenerio
        for(int i=0 ; i<str.size(); i++){ // iterate
            // conditions
            if(str[i] == '(' || str[i] == '{' || str[i] == '['){
                st.push(str[i]); // opening --> pushing elements
            } 
        }else{ // closing
            if(st.size() == 0){
                return 0;
            }
            // checking matching and removing
            if(st.top() == '(' && str[i] == ')' ||
                 st.top() == '{' && str[i] == '}' ||
                 st.top() == '[' && str[i] == ']' ||
                 st.pop());
            }else{
                return false;
            }
          
    }                       
    return st.size() == 0;
}
int main()
{
    
    return 0;
}