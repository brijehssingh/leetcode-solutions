class Solution {
public:
    int bs(int l, int r, vector<int>& nums, int target) {

        while (l <= r) {

            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {

                return mid;

            } else if (nums[mid] > target) {

                r = mid - 1;

            } else {

                l = mid + 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int x) {
        int l = 0;
        int n = nums.size();
        int r = n - 1;

        int index = -1;

        while (l <= r) {

            int mid = l + (r - l) / 2;

            if (nums[mid] == x)
                return mid;
            // left sorted
            if (nums[l] <= nums[mid]) {

                if (nums[l] <= x && x < nums[mid]) {
                    r = mid - 1;
                } else {

                    l = mid + 1;
                }

            }
            // right sorted
            else {

                if (nums[r] >= x && nums[mid] < x) {

                    l = mid + 1;

                } else {
                    r = mid - 1;
                }
            }
        }

        return -1;
    }
};