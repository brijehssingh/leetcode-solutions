class Solution {
public:
    string smallestSubsequence(string s) {
         vector<int> seen(26, 0);
       vector<int> last(26, 0);

      
        for(int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        string ans;

        for(int i = 0; i < s.size(); i++) {

            int val = s[i] - 'a';

           
            if(seen[val]) {
                continue;
            }

            while(!ans.empty() &&
                s[i] < ans.back() &&last[ans.back() - 'a'] > i ) {

                seen[ans.back() - 'a'] = 0;
                ans.pop_back();
            }

            seen[val] = 1;
            ans.push_back(s[i]);
        }

        return ans;
 
    }
};