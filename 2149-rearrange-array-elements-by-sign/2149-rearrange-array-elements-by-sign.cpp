class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
         vector<int>n;
          for(auto i : nums){
            if(i<0) n.push_back(i); 
            else p.push_back(i);
          }
          reverse(p.begin(),p.end());
           reverse(n.begin(),n.end());
int m = nums.size();
       for(int i=0 ;i<m;i++){
         
            if(i%2==0){
if(!p.empty()){
    nums[i]=p.back();
     p.pop_back();
}

            }


else{
    if(!n.empty()){
        nums[i]=n.back();
        n.pop_back();
    }
}
       }
    
return nums;

    }
};