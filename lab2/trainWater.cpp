#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int trap(int A[], int n) {
    if(A == NULL || n <= 1) return 0;
    int left[n];
    int right[n];
        
    left[0] = A[0];
    cout << "left[ " << 0 << "]: "<< left[0] << endl;
    for(int i=1; i<n; i++) 
    {
        left[i] = A[i]==0 ? 0 : max(left[i-1], A[i]);
        cout << "left[ " << i << "]: "<< left[i] << endl;
    }            

    right[n-1] = A[n-1];
    int res = 0;
    for(int i=n-2; i>=0; i--){
        right[i] = A[i]==0 ? 0 : max(right[i+1], A[i]);
        cout << "right[ " << i << "]: "<< right[i] << endl;
        res += min(right[i], left[i])-A[i];
        cout << "res: " << res << endl;
        
    }
    cout << "right[ " << n-1 << "]: "<< right[n-1] << endl;
    return res;
}

int main(int argc, char *argv[])
{
    int n = 12;
    int a[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "result: " << trap(a, n) << endl;
    
    return 0;
}
