class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int res = right; 

        while(left < right) {
            int k = midpoint(left, right);
            long long totalTime = 0;
            for (auto& p : piles) {
                totalTime += ceil(static_cast<double>(p)/k); 
            }
            if (totalTime <= h) {
                res = min(k, res);
                right = k;
            } else {
                left = k + 1;
            }
        }
        return res;
    }
};
