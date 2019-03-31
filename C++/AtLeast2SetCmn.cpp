class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1] || (a[1] == b[1] && a[0] > b[0]); 
        });
        int n = intervals.size(), ans = 0, p1 = -1, p2 = -1;
        for (int i = 0; i < n; i++) {
            // current p1, p2 works for intervals[i]
            if (intervals[i][0] <= p1) continue;
            // Neither of p1, p2 works for intervals[i]
            // replace p1, p2 by ending numbers
            if (intervals[i][0] > p2) {
                ans += 2;
                p2 = intervals[i][1];
                p1 = p2-1;
            }
            // only p2 works;  
            else {
                ans++;
                p1 = p2;
                p2 = intervals[i][1];
            }
        }
        return ans;
    }
};
/*
Sort the intervals by left endpoints and then remove those that contain others. Greedily pick integers in S as follows: for each interval that does not have enough integers in commons with S, pick the integers at the right end of that interval to be in S because that maximize the chance later intervals already contain them.

class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& v) {
        //sort by endpoints
        sort(v.begin(),v.end(), [](const vector<int>& a1, const vector<int> &a2) {
            if (a1[0] != a2[0]) return a1[0] < a2[0];
            return a1[1] > a2[1];
        });
        
        //remove intervals that conain others
        vector<vector<int>> w;
        for (int i = 0; i < v.size(); ++i) {
            while (w.size() && w.back()[1] >= v[i][1]) w.pop_back();
            w.push_back(v[i]);
        }
        
        //greedily choose integers that are at the right end of intervals that don't have two commont points with S yet.
        int x=-1,y=-1;
        int ans = 0;
        for (auto &b:w) {
            int c = 0;
            if (x >= b[0] && x <= b[1]) ++c;
            if (y >= b[0] && y <= b[1]) ++c;
            if (c < 2) {
                x = y;
                y = b[1];
                ++ans;
                if (c < 1) {
                    if (y-1 < b[0]) return -1;
                    x = y - 1;
                    ++ans;
                }
            }
        }
        
        return ans;
        
    }
};
*/


