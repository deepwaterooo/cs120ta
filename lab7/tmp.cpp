int binarySearchFirst(int a[], int n, vector<int> &result, int val, int low, int high) {
    while (low + 1 < high) {
        int mid = low + (high - low) / 2; // to prevent overflow
        if (a[mid] >= val)
            high = mid;
        else
            low = mid;
    }
    if (a[low] == val) return low;
    if (a[high] == val) return high;
    return -1;
}

int binarySearchLast(int a[], int n, vector<int> &result, int val, int low, int high) {
    while (low + 1 < high) {
        int mid = low + (high - low) / 2; // to prevent overflow
        if (a[mid] <= val)
            low = mid;
        else
            high = mid;
    }
    if (a[high] == val) return high;
    if (a[low] == val) return low;
    return -1;
}

vector<int> searchRange(int A[], int n, int target) {
    vector<int> result;
    result.push_back(binarySearchFirst(A, n, result, target, 0, n-1));
    result.push_back(binarySearchLast(A, n, result, target, 0, n-1));
    return result;
}
