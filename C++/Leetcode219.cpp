class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end() && m[nums[i]]>0){
                return true;
            }
            m[nums[i]]++;
            if(i>=k){
                m[nums[j++]]--;
            }
        }
        return false;
    }
};
// time complexity - O(n)
// space complexity - O(n)
// Methods Used - Hashing , Sliding Window
