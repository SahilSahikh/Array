/*Write a program to find the Third largest element in an Array*/
/*
Description:
This C program finds the third largest element in an array.
The program first reads the size of the array from the user and then reads the elements of the array.
It then calls the third_largest function, which traverses the array to determine the first, second, and third largest elements.
The function returns the third largest element, which is then printed.

Input Sample:
Enter the size of the array: 6
Input the elements of the array: 12 45 32 67 89 23

Output Sample:
Third largest element of the array is 45

Algorithm:
1) Initialize three variables: first, second, and third to INT_MIN to hold the first, second, and third largest elements respectively.
2) Traverse the array: Loop through each element of the array.
3) Check if the current element is greater than first:
        If true, update third to second, second to first, and first to the current element.
        Else, if the current element is greater than second and not equal to first:
        Update third to second, and second to the current element.
        Else, if the current element is greater than third, not equal to first or second:
        Update third to the current element.
4) Return the third variable: After the loop ends, third will hold the value of the third largest element.

*/

#include <stdio.h>
#include <limits.h>

int third_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}

int third_largest(int arr[], int size)
{
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) 
        {
            third = second;
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        } 
        else if (arr[i] > third && arr[i] != second && arr[i] != first) 
        {
            third = arr[i];
        }
    }

    return third;
}
