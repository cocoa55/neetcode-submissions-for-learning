class Solution {
   public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *std::ranges::max_element(weights.begin(), weights.end());
        int high = std::accumulate(weights.begin(), weights.end(), 0);
        int res = high;
        while (low < high) {
            int cap = std::midpoint(low, high);
            int totalDays = 1;
            int dayCapacity = 0;
            for (auto& w : weights) {
                if (w + dayCapacity <= cap) {
                    dayCapacity += w;
                } else {
                    totalDays++;
                    dayCapacity = 0;
                    dayCapacity += w;
                }
            }
            if (totalDays <= days) {
                high = cap;
                res = cap;
            } else {
                low = cap + 1;
            }
        }
        return res;
    }
};