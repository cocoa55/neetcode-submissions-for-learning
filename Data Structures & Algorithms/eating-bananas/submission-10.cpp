class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *std::max_element(piles.begin(), piles.end());
        int res = r;

        while(l < r) {
            int m = std::midpoint(l, r);
            long long totalTime = 0;
            for(auto& p : piles) {
                totalTime += std::ceil(static_cast<double>(p)/m);
            }
            if (totalTime <= h) {
                res = m;
                r = m;
            } else {
                l = m + 1;
            }
        }
        return res;
    }
};
