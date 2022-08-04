class Solution {
public:
    double average(vector<int>& salary) {
        int min_salary = 1e6 + 10;
        int max_salary = -1e6 - 10;
        double ans = 0;
        for(int i = 0; i < salary.size(); i++)
        {
            ans += salary[i];
            min_salary = min(min_salary, salary[i]);
            max_salary = max(max_salary, salary[i]);
        }
        
        ans -= min_salary + max_salary;
        ans /= salary.size() - 2;
        
        return ans;
        
    }
};
