int kthSmallest(int arr[], int N, int K)
{
    sort(arr, arr + N);
    return arr[K - 1];
}
