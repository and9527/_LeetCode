class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mymap;
        vector<int> ans;
        for(int i=0; i < nums.size(); i++){
            if(mymap.find(nums[i]) != mymap.end()){ // found
                ans.push_back(mymap[nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else{
                mymap[target - nums[i]] = i;
            }
        }
        return ans;           
    }
};