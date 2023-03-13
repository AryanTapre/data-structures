#include<iostream>
using namespace std;

class Array {

    private:
        int start,end,mid,*array,size,key;
    
    public:

        Array(int size) {

            this->size = size;
            array = new int[size];
            start = 0;
            end = this->size - 1;
        }

         void getArray() {

            cout<<"Enter array elements : "<<endl;
            for(int i=0; i<size; i++) {
                cin>>array[i];
            }

            cout<<endl<<"Enter key to be searched : ";
            cin>>key;
         }

        int binarySearch() {
            
            // to keep start and end in the range in integer i.e -2^31 to 2^31-1.
            mid = start + (end - start)/2;
           // cout<<mid<<endl;
            while(start <= end) {

                if(key == array[mid]) {
                    return mid;
                }

                if(key > array[mid]) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
                mid = start + (end - start)/2;
                
            }
            return (-1);

            // Time complexity : O(log n)
            // Space complexity : O(n)

        }
};

int main() {

    Array a = Array(5);
    a.getArray();
    int index = a.binarySearch();
    cout<<endl<<"Key Found At Index : "<<index;

    return(0);
}