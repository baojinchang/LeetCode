class Solution {

#include<vector>
#include<cmath>

public:
    int threeSumClosest(vector<int>& nums, int target) {
        int max=pow(2,31)-1;
        int ans;
        sort(nums.begin(),nums.end());
        int length=nums.size();
        for(int i=0;i<length-2;i++)
        {
            int l=i+1,r=length-1;
            while(l!=r)
            {
                if(abs(target-nums[i]-nums[l]-nums[r])<max)
                {
                    max=abs(target-nums[i]-nums[l]-nums[r]);
                    ans=nums[i]+nums[l]+nums[r];
                }
                if(nums[i]+nums[l]+nums[r]>target)
                    r--;
                else if(nums[i]+nums[l]+nums[r]<target)
                    l++;
                else    
                    return target;
            }
        }
        return ans;
    }
};