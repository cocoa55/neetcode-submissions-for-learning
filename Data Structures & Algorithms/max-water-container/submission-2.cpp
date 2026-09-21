class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n - 1;

        int maxWater{};
        int water{};
        while (l < r) {
            water = (r - l) * min(heights[l], heights[r]);
            maxWater = max(water, maxWater);
            if (heights[l] < heights[r])
                l++;
            else
                r--;
        }

        return maxWater;
    }
};
