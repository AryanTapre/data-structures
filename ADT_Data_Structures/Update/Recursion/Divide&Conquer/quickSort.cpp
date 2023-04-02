#include <iostream>
#include <vector>
using namespace std;

int quickPartition(int arr[], int start, int end) {
  int pivotElement = arr[start];
  int pivotIndex = start;

  int count = 0;
  for (int i = start + 1; i <= end; i++) {
    if (arr[i] <= pivotElement)
      count++;
  }

  int rightIndex = start + count;
  swap(arr[pivotIndex], arr[rightIndex]);
  // updated pivot index after swap..
  pivotIndex = rightIndex;

  int i = start;
  int j = end;
  while (i < pivotIndex && j > pivotIndex) {
    while (arr[i] <= pivotElement) {
      i++;
    }
    while (arr[j] > pivotElement) {
      j--;
    }
    if (i < pivotIndex && j > pivotIndex) {
      swap(arr[i], arr[j]);
    }
  }
  return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
  if (start >= end)
    return;
  int pivot = quickPartition(arr, start, end);
  quickSort(arr, start, pivot - 1);
  quickSort(arr, pivot + 1, end);
}

int main() {

  int arr[] = { 8, 1, 1, 1, 1, 1, 3, 4, 20, 20, 50, 30,30};
  int n = 13;
  int start = 0;
  int end = n - 1;

  quickSort(arr, start, end);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}