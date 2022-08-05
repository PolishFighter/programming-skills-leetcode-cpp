class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<pair<int, int>> valid;
        
        for(int i = 0; i < points.size();i++)
        {
            if(points[i][0] == x || points[i][1] == y)
            {
                valid.push_back({ abs(points[i][0]-x) + abs( points[i][1] - y) ,i});
            }
        }
        
        sort(valid.begin(), valid.end());
        
        return valid.size() > 0 ? valid[0].second : -1;
        
    }
};
