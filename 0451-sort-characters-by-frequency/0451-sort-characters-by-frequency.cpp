class Solution {
public:

string frequencySort(string s) {
        
    unordered_map<char,int> mp;

    for(auto i : s){
        mp[i]++;
    }

    vector<pair<char,int>> p(mp.begin(), mp.end());
       
  sort(p.begin(), p.end(), [](pair<char,int> a, pair<char,int> b){
            return a.second > b.second;
        });  
    string ans = "";

    for(auto i : p){
        ans.append(i.second, i.first);
    }

    return ans;
}
};