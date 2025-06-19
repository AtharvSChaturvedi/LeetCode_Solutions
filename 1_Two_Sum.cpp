class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_indices;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int second_int=target-nums.at(i);
            
            if(m.find(second_int)!=m.end()){
                target_indices.push_back(i);
                target_indices.push_back(m.find(second_int)->second);
                break;
            }
            else{
                m[nums.at(i)]=i;
            }
        }
        return target_indices;
    }
};
