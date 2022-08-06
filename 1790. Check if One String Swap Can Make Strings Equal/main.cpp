/*
 * Link: https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
 */
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        char d1 = ' ',d2 = ' ';
        int d3 = 0;
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] != s2[i])
            {
                d3++;
                if(d1 == ' ')
                {
                    d1 = s1[i];
                    d2 = s2[i];
                }
                else
                {
                    if(s2[i] != d1 || s1[i] != d2)
                    {
                        return false;
                    }
                }
            }
        }
        
        if(d3 == 2 || d3 == 0)
            return true;
        return false;
    }
};
