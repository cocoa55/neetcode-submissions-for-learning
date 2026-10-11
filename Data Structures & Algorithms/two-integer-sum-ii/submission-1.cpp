class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        int res = 0;

        while (l < r) {
            res = numbers[l] + numbers[r];
            if (res == target)
                return {++l, ++r};
            else if(res > target) {
                r--;
            } else {
                l++;
            }
        
        }
    }
};
