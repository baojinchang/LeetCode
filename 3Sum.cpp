class Solution {

#include<vector>
#include<map>

public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int ,int> target;
        vector<vector<int>> ans;
        int length=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<length;i++)
            target[nums[i]]=i+1;
        for(int i=0;i<length-1;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            if(nums[i]>0)
                break;
            for(int j=i+1;j<length;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1])
                    continue;
                if(target[-(nums[i]+nums[j])]>j+1)
                {
                    vector<int> temp(3);
                    temp[0]=nums[i];
                    temp[1]=nums[j];
                    temp[2]=-(nums[i]+nums[j]);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};