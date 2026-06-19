class Solution {
public:
// asked in google
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int> set(nums.begin(), nums.end());

        int count = 0;
        int maxCount = 0;

        for(auto it : set){
            if(set.find(it - 1) == set.end()){
                int curr = it;
                count  = 1;

                while(set.find(curr + 1) != set.end()) {
                    curr++;
                    count++;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};