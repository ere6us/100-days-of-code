// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/547/week-4-july-22nd-july-28th/3399/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> pair;
        
        int xorPair = nums[0];
        for(int i=1; i<nums.size(); i++)    {
            xorPair ^= nums[i];
        }
        
        int position = 0;
        
        int element = xorPair;
        
        while(1)    {
            if(element&1)   {
                break;
            }
            position++;
            element >>= 1;
        }
        
        int val = xorPair;
        
        for(int i : nums)   {
            int temp = i;
            temp >>= position;
            if(temp&1)  {
                val ^= i;
            }
        }
        
        pair.push_back(val);
        pair.push_back(val^xorPair);
        
        return pair;
    }
};
