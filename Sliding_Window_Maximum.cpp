class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        int left = 0, right = 0, n = nums.size(), max = INT_MIN;
        vector<int> result;
        list<int> l;
        while (right < n)
        {
            while (l.size() > 0 && l.back() < nums[right])
                l.pop_back();
            l.push_back(nums[right]);
            if ((right - left + 1) < k)
                right++;
            else if ((right - left + 1) == k)
            {
                result.push_back(l.front());
                if (nums[left] == l.front())
                    l.pop_front();
                left++;
                right++;
            }
        }
        return result;
    }
};