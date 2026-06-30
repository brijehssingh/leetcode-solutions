class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    //    unordered_map<int,int>mp; 

    //         int count  =0 ;
    //           int sum=0 ;
    //            mp[0]=1;
                
    //            for(auto i : nums){
    //             sum+=i;
    //             if(mp.count(sum-k)){
    //                 count+=mp[sum-k];
    //             }


                
    //                 mp[sum]++;
                
    //            }

    //          return  count ;
              
int ans= 0 ;
 
   int n = nums.size(); 
   for(int i =0;i<n;i++){
    int sum =0;

    for(int j =i ;j<n;j++){
   sum+=nums[j];
   if(sum==k){
    ans++;
   }
 
    }


   }

return ans;
 
    }



};