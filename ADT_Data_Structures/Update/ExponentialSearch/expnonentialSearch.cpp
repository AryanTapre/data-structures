#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(int start, int end, vector<int> &arr, int key)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    vector<int> arr{3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int size = arr.size();
    int key = 15;
    int i = 0;
    if (arr[i] == key)
        cout << "element found at : " << i << " position" << endl;
    else
    {
        i = i + 1;
        while (i < arr.size() && arr[i] <= key)
        {
            i = i * 2;
        }

        int ans = binarySearch(i / 2, min(i, size - 1), arr, key);
        if (ans != -1)
        {
            cout << "element found at : " << ans << " position" << endl;
        }
        else
        {
            cout << "element not found!" << endl;
        }
    }

    return (0);
}