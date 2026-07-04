class Solution {
public:


      bool check(int mid, vector<int>&nums , int threshold){

    int nh = 0;
       
        for(auto i :nums){
            nh+=(i+mid-1)/mid;
        }

return nh<=threshold;


      }



    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
         int r=*max_element(nums.begin(),nums.end());
          int ans = -1;
            while(l<=r){
int mid= l+(r-l)/2;

      if(check(mid , nums , threshold)){
        ans= mid;
         r=mid-1;
      }
      else{
        l=mid+1;
      }


            }
            
      return ans;

    }
};