vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{
    int i = 0;
    int j = 0;
    list<int> l1;
    vector<long long> result;
    while (j < N)
    {
        if (A[j] < 0)
            l1.push_back(A[j]);
        if (j < i + K - 1)
        {
            j++;
        }
        else if (j - i + 1 == K)
        {
            if (l1.empty())
                result.push_back(0);
            else
                result.push_back(l1.front());
            if (A[i] < 0)
                l1.pop_front();
            i++;
            j++;
        }
    }
    return result;
}