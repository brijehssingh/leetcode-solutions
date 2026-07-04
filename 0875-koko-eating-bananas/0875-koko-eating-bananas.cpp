class Solution {
public:


    bool check(int mid , vector<int>&p , int h ){


    long long time = 0;
     
      for(auto i : p ){

        time+=(i+mid-1)/mid;
         
      }
return time<=h;
 

    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ;
         int high = *max_element(piles.begin(),piles.end());
           int ans = -1 ;
            
            while(low<=high){
                int mid = low + (high-low)/2;
                 
    if(check( mid , piles , h )){
        ans =mid;
         high = mid-1 ;
          
    }
    else{
        low = mid+1;
    }

            }

            return ans ; 

    }
};