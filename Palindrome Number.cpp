class Solution {

#include<string>

public:
    bool isPalindrome(int x) {
        string temp=to_string(x);
        int length=temp.size();
        for(int i=0;i<length/2;i++)
        {
            if(temp[i]!=temp[length-1-i])
                return false;
        }
        return true;
    }
};