class Solution {
public:


  static  bool compare(pair<char,int> a , pair<char,int>b){

    return a.second>b.second;
     
}


    int minimumPushes(string word) {
        
unordered_map<char, int> mp;

for (char ch : word) {
    mp[ch]++;
}

vector<pair<char,int>> freq;

for (auto i : mp) {
    freq.push_back({i.first , i.second});
}

sort(freq.begin(), freq.end(),compare);


int ans = 0;

for (int i = 0; i < freq.size(); i++) {
    int pushes = (i / 8) + 1;
    ans += freq[i].second * pushes;
}

return ans;


    }
};