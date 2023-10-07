#include <iostream>
using namespace std;
void sortcolors(int arr[], int n)
{
    int index=0;
    int left = 0;
    int right = n - 1;
    while (index <= right)
    {
            if (arr[index] == 0)
            {
                swap(arr[index], arr[left]);
                index++;
                left++;
            }
            else if (arr[index] == 2)
            {
                swap(arr[index], arr[right]);
                //index++; //not increment here (may be 2 will present in right) 
                right--;
            }
            else
            {
                index++;
            }
        }
    }

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0,2,1};
    int n = 8;

    sortcolors(arr, n);
    for(int index=0;index<n;index++){
        cout<<arr[index]<<" ";
    }

    return 0;
}
