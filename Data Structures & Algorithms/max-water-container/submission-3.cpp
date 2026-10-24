class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0;
        int r = static_cast<int>(heights.size()) - 1;

        while (l < r) {
            int min_height = std::min(heights[l], heights[r]);
            int area = min_height * (r - l);
            if (area > max) {
                max = area;
                if (min_height == heights[l]) {
                    l++;
                } else r--;
            } else {
                if (heights[l] < heights[r]) l++; 
                else r--;
            }
        }
        return max;
    }
};
