// https://leetcode.com/problems/trapping-rain-water/
// Dificulty level - Hard

// Approach to solve - using 2 pointer method.
class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0, l = 0, r = height.size()-1;
        int lm = 0 , rm = 0;
        while (l < r) {
            if(height[l] < height[r]) {
                height[l] >= lm ? (lm = height[l]) : (ans += lm - height[l]);
                ++l;
            }
            else {
                height[r] >= rm ? (rm = height[r]) : ans += rm - height[r];
                --r;
            }
        }
    return ans;
    }
};
