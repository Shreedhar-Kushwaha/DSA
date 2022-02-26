class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (mid > 0 && mid < nums.size() - 1)
            {
                if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
                    return mid;
                else if (nums[mid - 1] > nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            else if (mid == 0 && nums.size() != 1)
            {
                if (nums[0] > nums[1])
                    return 0;
                else
                    return 1;
            }
            else if (mid == nums.size() - 1 && nums.size() != 1)
                if (nums[nums.size() - 1] > nums[nums.size() - 2])
                    return nums.size() - 1;
                else
                    return nums.size() - 2;
            else
                return 0;
        }
        return -1;
    }
};