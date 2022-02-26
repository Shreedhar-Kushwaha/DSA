class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int left = 0;
        int right = 0;
        double sum = 0;
        double large = INT_MIN;
        int n = nums.size();
        sum += nums[left];
        while (right < n)
        {
            if (right < (left + k - 1))
            {
                right++;
                sum += nums[right];
            }
            else if (right - left + 1 == k)
            {
                large = sum > large ? sum : large;
                sum -= nums[left];
                left++;
                right++;
                if (right < n)
                    sum += nums[right];
            }
        }
        return large / k;
    }
};