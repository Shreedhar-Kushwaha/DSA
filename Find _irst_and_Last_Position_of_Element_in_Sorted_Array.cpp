class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int left = 0, right = n - 1, result = -1;
        vector<int> ans{-1, -1};
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (target == nums[mid])
            {
                result = mid;
                right = mid - 1;
            }
            if (target <= nums[mid])
            {
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        ans[0] = result;
        result = -1;
        left = 0;
        right = n - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (target == nums[mid])
            {
                result = mid;
                left = mid + 1;
            }
            if (target < nums[mid])
            {
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        ans[1] = result;
        return ans;
    }
};