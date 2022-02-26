pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int i=0;
    pair<int,int> result;
    int ceil=INT_MAX, floor=INT_MIN;
    while(i<n){
        if(arr[i]<=x)
            floor=(floor>arr[i])?floor:arr[i];
        i++;
    }
    i=0;
    while(i<n){
        if(arr[i]>=x)
            ceil=(arr[i]>ceil)?ceil:arr[i];
        i++;
    }
    result.first=(floor==INT_MIN?-1:floor);
    result.second=(ceil==INT_MAX?-1:ceil);
    return result;
}

//git push https://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@github.com/shreedharkushwaha1403@gmail.com/DSA.git



//git clone https://scuzzlebuzzle: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@github.com/scuzzlebuzzle/DSA.git --branch=gh-pages gh-pages