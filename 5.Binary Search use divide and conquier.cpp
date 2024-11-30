#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    while (low <= high) {
        int mid = (low + high) / 2;  // Keeping the original mid calculation

        if (arr[mid] == target)
            return mid;  // Target found

        if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1; // Target not found
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
