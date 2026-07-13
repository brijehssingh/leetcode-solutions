class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
           string s = "123456789";
            for(int i = 1;i<=9 ;i++){
                for(int j = 0 ;j+i<=9 ;j++){

                string t = s.substr(j,i);
                    
                    int val = stoi(t);
                        
                        if(val>=low&& val<=high){
                            ans.push_back(val);
                        }
            

                }
            }

             return ans; 

    }
};