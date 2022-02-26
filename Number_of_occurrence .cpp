class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x)
    {
        // code here
        int left = 0, right = n - 1, first = -1, last = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (arr[mid] == x)
            {
                first = mid;
                right = mid - 1;
            }
            if (x <= arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        left = 0;
        right = n - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (arr[mid] == x)
            {
                last = mid;
                left = mid + 1;
            }
            if (x < arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return (first == -1 || last == -1) ? 0 : (last - first + 1);
    }
};