/*
 * Link: https://leetcode.com/problems/happy-number/
 */
class Solution {
public:
    bool isHappy(int n) {
        bool visited[1000] = {false};
        
        n = next(n);
        
        
        while(!visited[n])
        {
            visited[n] = true;
            n = next(n);
        }
        
        if(n == 1)
            return true;
        return false;
    }
    
private:
    int next(int x)
    {
        int ans = 0;
        
        while(x > 0)
        {
            ans += (x%10)*(x%10);
            x/=10;
        }
        
        return ans;
    }
};
