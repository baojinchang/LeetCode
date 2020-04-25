class Solution {

#include<vector>
#include<string>

public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==0)
            return ans;
        int flag=1;
        int length=strs[0].size();
        for(int i=0;i<length;i++)
        {
            char temp=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(i>=strs[j].size()||temp!=strs[j][i])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                break;
            ans+=temp;
        }
        return ans;
    }
};