class Solution {
public:
    bool check(int i, vector<int>& nums) {

        return (nums[i - 1] < nums[i] && nums[i] > nums[i + 1]);
    }
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
       if (n == 1) return 0;
       
if (nums[0] > nums[1]) return 0;

    if (nums[n-1] > nums[n-2]) return n-1;
   
        int low = 1;
        int high = n - 2;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(mid, nums)) {
                return mid;
            } else if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return 0;
    }
};