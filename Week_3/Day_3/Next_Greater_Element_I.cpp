class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int k = -1;
        for(int i = 0; i < nums1.size(); i++)
        {
            int j = 0;
            while(j < nums2.size())
            {
                if(nums1[i] == nums2[j])
                {
                    j++;
                    if(nums2[j] > nums1[i])
                    {
                        ans.push_back(nums2[j]);
                    }
                    else
                        ans.push_back(k);
                }
                else
                    j++;
            }
        }
        return ans;
    }
};