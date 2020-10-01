class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map <int, int> mymap;
        for (int i = 0 ; i <nums.size() ; i++)
            mymap[nums[i]]++;
        
        for (auto i=mymap.begin() ; i!=mymap.end(); i++)
            if (i->second > nums.size()/2 ) return i->first;
    
        return 0;
    }
};