class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0;
        int r = static_cast<int>(heights.size()) - 1;

        while (l < r) {
            int area = std::min(heights[l], heights[r]) * (r - l);
            if (area > max) {
                max = area;
            } 
            if (heights[l] < heights[r]) 
                l++; 
            else 
                r--;
        }
        return max;
    }
};
