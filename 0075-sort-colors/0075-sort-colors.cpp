class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        // solved using the Dutch's National Flag Algorithm
        int i = 0, j = 0;
        int k = n-1;

        while(j <= k){
            if(nums[j] == 0){
                swap(nums[j++], nums[i++]);
            }else if(nums[j] == 2){
                swap(nums[j], nums[k--]);
            }else{
                j++;
            }
        }
    }
};