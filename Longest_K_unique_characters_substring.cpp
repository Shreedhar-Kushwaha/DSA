int longestKSubstr(string s, int k)
{
    // your code here
    int left = 0, right = 0, max = INT_MIN;
    int n = s.size();
    map<char, int> m;
    while (right < n)
    {
        m[s[right]]++;
        if (m.size() < k)
            right++;
        else if (m.size() == k)
        {
            max = max > (right - left + 1) ? max : (right - left + 1);
            right++;
        }
        else if (m.size() > k)
        {
            while (m.size() > k)
            {
                m[s[left]]--;
                if (m[s[left]] == 0)
                    m.erase(s[left]);
                left++;
            }
            right++;
        }
    }
    return max == INT_MIN ? -1 : max;
}