/*Description:
This C program finds the second largest element in an array. The program reads the size of the array and its elements from the user, then calls the sec_largest function to determine the second largest element, which is then printed.

Input Sample:
Enter the size of the array: 6
Input the elements of the array: 12 45 32 67 89 23
  
Output Sample:
Second largest element of the array is 67
  
Algorithm:
  
Initialize two variables: first and second to the first element of the array.
Traverse the array starting from the second element:
If the current element is greater than first:
Update second to first.
Update first to the current element.
If the current element is greater than second and not equal to first:
Update second to the current element.
Return the second variable: After the loop ends, second will hold the value of the second largest element.
*/
#include <stdio.h>

int sec_largest(int [], int);

int main()
{
    int size, ret;
    
    // Read size from the user
    scanf("%d", &size);
    
    int arr[size];
    
    // Read elements into the array
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Function call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}

int sec_largest(int arr[], int size)
{
    int first = arr[0];
    int second = arr[0];
    
    // Finding the largest element
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    
    return second;
}
