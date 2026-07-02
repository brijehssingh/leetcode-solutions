class Solution {
public:
    int beautySum(string s) {
         int n = s.size();

        int ans = 0;

        for(int i = 0; i < n; i++) {
            vector<int> v(26, 0);

            for(int j = i; j < n; j++) {

                v[s[j] - 'a']++;

                int fre = 0;
                int least = INT_MAX;

                for(auto x : v) {
                    if(x > 0) {
                        fre = max(fre, x);
                        least = min(least, x);
                    }
                }

                int val = fre - least;
                ans += val;
            }
        }

        return ans;
    }
};