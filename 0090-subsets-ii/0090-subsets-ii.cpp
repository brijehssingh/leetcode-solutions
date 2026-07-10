class Solution {
public:
vector<vector<int>> result;

void solve(vector<int> curr, vector<int>& nums, int i,int n) {
    if (i == n) {
        result.push_back(curr);
        return;
    }
    
    curr.push_back(nums[i]);
    solve(curr, nums, i + 1,n);
    curr.pop_back();
    
    while (i + 1 < n && nums[i] == nums[i + 1]) {
        i++;
    }
    solve(curr, nums, i + 1,n);
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     
 sort(nums.begin(), nums.end()); 
   int n = nums.size();
    vector<int> curr;
    solve(curr, nums, 0,n);
    
    return result;

    }
};