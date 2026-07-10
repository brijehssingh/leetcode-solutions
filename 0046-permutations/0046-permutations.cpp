class Solution {
public:

     unordered_set<int>st;
      vector<vector<int>>ans;
       

       void backtrack( vector<int>&nums, vector<int>&temp , int n ){


         if(temp.size()==n){
            ans.push_back(temp);
             return;
         }




         for( int i =0 ;i<n ;i++){


      if(st.find(nums[i])==st.end()){


     st.insert(nums[i]);
        temp.push_back(nums[i]);
         
          backtrack(nums, temp , n );
            temp.pop_back();
             st.erase(nums[i]);
            
    

      }
 
               
         }
 


       }

    vector<vector<int>> permute(vector<int>& nums) {
        

    int n = nums.size();
     vector<int>temp;
      
      backtrack(nums , temp , n  );
        return ans;
         
       


    }
};