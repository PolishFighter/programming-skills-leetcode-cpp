/*
 * Link: https://leetcode.com/problems/sign-of-the-product-of-an-array/
 */
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        
        for(int& n : nums)
            ans *= signFunc(n);
        
       return ans;
    }
    
private:
    int signFunc(int x)
    {
        if(x > 0)
            return 1;
        if(x < 0)
            return -1;
        
        return 0;
    }
        
};
