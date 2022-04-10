class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        vector <int> res;
        for(int i=0;i<nums.size();i++)//Enter the loop
        {
            if(mp.find(nums[i])== mp.end()) //check whether 2 is present in the map or not
                mp[nums[i]] = i;//if not present insert 2th index i.e, 0 into the map (2 ->0)
            if(mp.find(target-nums[i]) !=mp.end() && i != mp[target-nums[i]]) 
                //(9-2) != 7 so do not enter the loop....(9-7) =2 && index of 2 is = to 7 ?
                
            {
                res.push_back(i);//index of the current element(1)
                res.push_back(mp[target-nums[i]]);//mp(9-7=2)=(0)
                break;
            }
                
        }
        return res;
    }
};