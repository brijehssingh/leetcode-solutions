class Solution {
public:
    int reverseBits(int n) {
       string s ;

         for (int i = 0; i < 32; i++) {
            s.push_back((n % 2) + '0');
            n /= 2;
        }
int ans = 0 ;
 

       for(auto i :s){
        ans = ans * 2 + (i - '0');
       }
     
return ans; 

    }
};