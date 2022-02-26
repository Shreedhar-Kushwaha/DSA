vector<int> max_of_subarrays(int *arr, int n, int k)
{
    // your code here
    int left = 0, right = 0;
    list<int> l;
    vector<int> result;
    while (right < n)
    {
        while (l.size() > 0 && l.back() < arr[right])
            l.pop_back();
        l.push_back(arr[right]);
        if (right < k + left - 1)
        {
            right++;
        }
        else if (k == right - left + 1)
        {
            result.push_back(l.front());
            if (arr[left] == l.front())
                l.pop_front();
            right++;
            left++;
        }
    }
    return result;
}