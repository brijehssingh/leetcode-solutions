class Solution {
public:
    bool search(vector<int>& nums, int x) {
        int n = nums.size();

        int l = 0;
        int r = n - 1;

        while(l <= r) {

            int mid = l + (r - l) / 2;

            if(nums[mid] == x) return 1;

            // duplicate case
            if(nums[l] == nums[mid] && nums[mid] == nums[r]) {
                l++;
                r--;
            }

            // left sorted
            else if(nums[l] <= nums[mid]) {

                if(nums[l] <= x && x <= nums[mid]) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }

            // right sorted
            else {

                if(nums[mid] <= x && x <= nums[r]) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }
        }

        return 0;
                  
    }
};