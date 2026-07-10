class Solution {
public:
vector<vector<int>> ans; 

    void find(int i ,int sum ,  vector<int>&nums ,vector<int>&temp,  int k , int n , int m ){

       if(sum == n && temp.size() == k){
            ans.push_back(temp);
            return;
        }

        if(i >= m || sum > n ){
            return;
        }

    temp.push_back(nums[i]);
        find(i + 1, sum + nums[i], nums, temp, k, n, m);
        temp.pop_back();

        find(i + 1, sum, nums, temp, k, n, m);

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
           for(int i =1;i<=9;i++){
            nums.push_back(i);
           }
           int m = nums.size(); 
vector<int>temp; 


    find(0 ,0 , nums,temp, k , n , m  ); 
          
    
return ans; 


    }
};