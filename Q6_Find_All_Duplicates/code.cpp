class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    
    unordered_map<int, int> hashmap;
    vector<int> ans;

    // loop over the nums and store occurences!
    for(int i = 0;i<nums.size(); i++){
         ++hashmap[nums[i]];
    }

    // loop over the hashmap!
    for(auto& pair : hashmap){
        if(pair.second == 2){
            ans.push_back(pair.first);
        }
    }

    return ans;
    }
};


