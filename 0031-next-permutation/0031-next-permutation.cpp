class Solution {
public:
    // fn to swap elements
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;

    }

    //fn to reverse elements
    void reverse(vector<int>& nums, int start, int end) {
        while(start < end) {
            swap(nums, start, end);
            start++;
            end--;
        }
    }

    // next permutation function
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
        }

        if(idx != -1) {
            for(int i = n-1; i > idx; i--){
                if(nums[i] > nums[idx]){
                    swap(nums, i, idx);
                    break;
                }
            }
        }
        reverse(nums, idx + 1, n - 1);

    }
};