class Solution {

#include<string>

public:
    int romanToInt(string s) {
        int ans=0;
        int length=s.size();
        int i=0;
        while(i<length)
        {
            if(s[i]=='M')
                ans+=1000;
            else if(s[i]=='D')
                ans+=500;
            else if(s[i]=='C'&&i<length-1&&(s[i+1]=='M'||s[i+1]=='D'))
                ans-=100;
            else if(s[i]=='C')
                ans+=100;
            else if(s[i]=='L')
                ans+=50;
            else if(s[i]=='X'&&i<length-1&&(s[i+1]=='C'||s[i+1]=='L'))
                ans-=10;
            else if(s[i]=='X')
                ans+=10;
            else if(s[i]=='V')
                ans+=5;
            else if(s[i]=='I'&&i<length-1&&(s[i+1]=='X'||s[i+1]=='V'))
                ans-=1;
            else
                ans+=1;
            i++;
        }
        return ans;
    }
};