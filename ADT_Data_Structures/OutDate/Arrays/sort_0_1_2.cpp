#include<iostream>
using namespace std;

void sortTwo(int *arr, int size) {
		
	int left = 0, right = size - 1;
	while(left < right) {
		
		
		 if(arr[left] > arr[right]) {
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
		else if(arr[left] < arr[right])
			right--;
		else if(arr[left] == arr[right]) {

            if(left == right-1) {

                left = left + right;
            }
            else {
                int temp = arr[left];
                arr[left] = arr[right-1];
                arr[right-1] = temp;
            }
			
		}
        else if(arr[left] == 0)
			left++;
	}

	cout<<"sorted array is : "<<endl;
	for(int i=0; i<size; i++) {
		
		cout<<arr[i]<<" ";
	}
}

int main() {
	
	int array[8] = { 0,2,1,1,0,2,0,1 };
	sortTwo(array,8);
	return (0);
}
