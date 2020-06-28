class Solution {

    vector<string> str={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    vector<string> ans;
    string temp="";
    int dfs(string digits,int deep)
    {
        deep++;
        int cns=digits[deep]-'0';
        for(int i=0;i<str[cns].size();i++)
        {
            if(temp.size()<=deep)
                temp+=str[cns][i];
            else
                temp[deep]=str[cns][i];
            if(deep!=digits.size()-1)
                dfs(digits,deep);
            else
                ans.push_back(temp);
        }

        return 0;
    }

public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return ans;
        dfs(digits,-1);
        return ans;
    }
};