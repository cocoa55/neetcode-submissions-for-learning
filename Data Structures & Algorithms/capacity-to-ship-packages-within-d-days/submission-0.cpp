class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *std::max_element(weights.begin(), weights.end());
        int high = std::accumulate(weights.begin(), weights.end(), 0); 
        int res = high;

        while (low < high) {
            int maxCapacity = std::midpoint(low, high);
            int totalDays = 1;
            int totalCapacity = 0;
            for(auto& w : weights) {
                if (w + totalCapacity <= maxCapacity) { 
                    totalCapacity += w;  
                } else {
                    totalDays++;
                    totalCapacity = w; 
                }
            }
            if (totalDays <= days) {
                res = maxCapacity;
                high = maxCapacity; 
            } else {
                low = maxCapacity + 1;
            }
        }
        return res;
    }
};