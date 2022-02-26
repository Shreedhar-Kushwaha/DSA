class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int left = 0, right = 0, longest = 0;
        map<char, int> m;
        while (right < n)
        {
            m[s[right]]++;
            if (m.size() > (right - left + 1))
                right++;
            if (m.size() == (right - left + 1))
            {
                longest = longest > (right - left + 1) ? longest : (right - left + 1);
                right++;
            }
            else if (m.size() < (right - left + 1))
            {
                while (m.size() < (right - left + 1))
                {
                    m[s[left]]--;
                    if (m[s[left]] == 0)
                        m.erase(s[left]);
                    left++;
                }
                right++;
            }
        }
        return longest;
    }
};