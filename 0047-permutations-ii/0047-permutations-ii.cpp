class Solution {
public:



 void recursion(vector<int>& num, int i, int j, vector<vector<int>>& res) {
    if (i == j) {
        res.push_back(num);
        return;
    }
     unordered_set<int>seen;
 
    for (int k = i; k < j; k++) {
        if (seen.find(num[k]) == seen.end()) {

        seen.insert(num[k]); 
        // Swap current number to the front
        swap(num[i], num[k]); 
         // Recurse for the next level
        recursion(num, i + 1, j, res); 
        
        swap(num[i], num[k]); // Backtrack
        }
    }
}
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size(); 
       
 vector<vector<int>> res;
    recursion(nums, 0,n, res);
    return res;
    }
};