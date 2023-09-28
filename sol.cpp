class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                int index = i;
                while (index < n && nums[index] == 1)
                    index++;
                mx = max(mx, index - i);
                i = index - 1;
            }
        }
        return mx;
    }
};
