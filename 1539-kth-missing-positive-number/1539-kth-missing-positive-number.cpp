class Solution {
public:

   unordered_set<int>st;
 int ans=0;

 bool check(int mid , int k ){
int c=0;
  for(int i =1;i<mid ;i++){

    if(st.find(i)==st.end()){
c++;
    }
    if(c==k){
        ans= i;
        return 1;
    }

  }
return 0;
 

 }
     


    int findKthPositive(vector<int>& arr, int k) {
        int l =1;
        int r= 1e9; 
       
       for(auto i :arr){
        st.insert(i);
       }

         while(l<=r){
  int mid = l+(r-l)/2;
       
           if(check( mid, k)){
            
           r=mid-1;
            
           }
           else {
            l=mid+1;
           }
       
         }


         return ans;
          
    }
};