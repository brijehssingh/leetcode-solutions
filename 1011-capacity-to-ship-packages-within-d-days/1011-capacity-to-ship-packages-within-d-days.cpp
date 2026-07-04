class Solution {
public:


    bool check(int mid  , vector<int>&w , int days){

   int day = 1 ;
    int load =0;
      
       for(auto i : w){

   if(load+i>mid){
    day++;
     load =i;
      
   }
   else{
    load+=i;
     
   }



       }


       return days>=day;
       

    }
   

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
    int high = 1e9;
    int ans = -1;
             while(low<=high){

  int mid = low + (high-low)/2;
   
      if(check(mid , weights , days)){
   
 ans= mid ;
  high = mid-1;

      }else{
    low=mid+1;
      }

             }
             return ans;
              
    }
};