class Solution {
public:

 bool check(int mid , vector<int>&bloomDay, int m , int k ){


       int flowers = 0;
    int bouquet = 0;

    for (auto i : bloomDay) {

        if (i <= mid) {
            flowers++;

            if (flowers == k) {
                bouquet++;
                flowers = 0;
            }
        }
        else {
            flowers = 0;
        }
    }

    return bouquet >= m;


 }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int l =1; 
        int  r= *max_element(bloomDay.begin(),bloomDay.end());
         int ans= -1 ; 
           while(l<=r){
            int mid = l+(r-l)/2;
             
if(check(mid , bloomDay , m , k )){
    ans = mid;
     r= mid-1;
}
else {
    l = mid+1 ;
}

           }
             return ans;
              

    }
};