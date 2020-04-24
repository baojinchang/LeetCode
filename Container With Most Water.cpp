class Solution {

#include<vector>

public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int length=height.size();
        int i=0,j=length-1;
        while(i!=j)
        {
            if(height[i]>height[j])
            {
                if(ans<height[j]*(j-i))
                    ans=height[j]*(j-i);
                j--;
            }
            else
            {
                if(ans<height[i]*(j-i))
                    ans=height[i]*(j-i);
                i++;
            }
        }
        return ans;
    }
};