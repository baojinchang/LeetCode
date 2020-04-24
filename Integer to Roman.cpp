class Solution {

#include<string>

public:
    string intToRoman(int num) {
       string ans;
        int count=0;
        count=num/1000;
        num=num%1000;
        for(int i=0;i<count;i++)
            ans+="M";
        count=num/100;
        num=num%100;
        if(count==9)
            ans+="CM";
        else if(count>=5)
        {
            ans+="D";
            for(int i=0;i<count-5;i++)
                ans+="C";
        }
        else if(count==4)
            ans+="CD";
        else
        {
            for(int i=0;i<count;i++)
                ans+="C";
        }
        count=num/10;
        num=num%10;
        if(count==9)
            ans+="XC";
        else if(count>=5)
        {
            ans+="L";
            for(int i=0;i<count-5;i++)
                ans+="X";
        }
        else if(count==4)
            ans+="XL";
        else
        {
            for(int i=0;i<count;i++)
                ans+="X";
        }
        count=num;
        if(count==9)
            ans+="IX";
        else if(count>=5)
        {
            ans+="V";
            for(int i=0;i<count-5;i++)
                ans+="I";
        }
        else if(count==4)
            ans+="IV";
        else
        {
            for(int i=0;i<count;i++)
                ans+="I";
        }
        return ans;
    }
};