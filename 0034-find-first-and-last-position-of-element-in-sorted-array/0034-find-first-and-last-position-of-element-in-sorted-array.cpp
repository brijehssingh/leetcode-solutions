class Solution {
public:

//     int bsleft(vector<int>&nums, int target , int n  ){

//      int l =0 ;
//       int r= n-1; 
// int mid = -1 ;
//  int index = -1;
  
//        while(l<=r){

//         mid= l+(r-l)/2;
         
//           if(nums[mid] == target){

//        index = mid;
//         r = mid-1;

//           }
//           else if(nums[mid] > target ){

//            r= mid-1;
            

//           }
//           else{
//          l =mid+1;

       
//           }


//        }
// return index;
 


//     }


//     int bsright(vector<int>&nums , int target ,int  n){

// int l=0 ;
//  int r=n-1 ;
     
//       int mid= -1 ;
//        int index = -1;
         
//          while(l<=r){

// mid = l+(r-l)/2; 
 
//  if(nums[mid]==target){

//     index= mid; 
//         l= mid+1 ;
          
//  }

// else if(nums[mid]  >  target){

//     r= mid-1; 
// }
// else {

//     l=mid+1;
     
// }
//          }

// return index;

 

//     }

      int foc(vector<int>& nums, int t, int n) {

    int l = 0;
    int r = n - 1;

    int ans = -1;

    while (l <= r) {

        int mid = l + (r - l) / 2;

        if (nums[mid] == t) {
            ans = mid;     
            r = mid - 1;    
        }

        else if (nums[mid] < t) {
            l = mid + 1;
        }

        else {
            r = mid - 1;
        }
    }

    return ans;
}


int loc(vector<int>& nums, int t, int n){
    int l =0 ;
    int r = n-1;
    int ans =-1;
     
      while(l<=r){
        int mid = l+(r-l)/2;
         
         if(nums[mid] == t){
ans= mid; 
l=mid+1; 

         }

         else if( nums[mid]>t){
            r=mid-1;
         }
         else {
            l=mid+1;
         }
      }

      return ans; 

}



    vector<int> searchRange(vector<int>& nums, int target) {
        

        int n = nums.size();
//    int leftmost= bsleft(nums , target, n);
//   int rightmost = bsright(nums , target , n);

    int a1= foc(nums, target, n);
     int a2 = loc(nums, target, n);
      
     return {a1,a2 };

    }
};