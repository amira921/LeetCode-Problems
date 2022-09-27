class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       if(strs.size()==1)return strs{{strs[0]}};

       unordered_map<string , vector<string>> group;
       for(auto i:strs){
        string s = i;
        sort(i.begin();i.end());
        group[i].push_back(s);
       }

       vector<vector<string>> res;
       for(auto i:group)
        res.push_back(i.second);
       return res;
    }
};