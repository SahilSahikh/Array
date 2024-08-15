/*
#### Description:
This C program moves all negative numbers in an array to the left side and prints only the negative numbers. 
It reads the size and elements of the array from the user, processes the array to segregate negative numbers, and then prints them.

#### Input Sample:
```bash
Enter the size of the array: 8
Enter array elements: 1 -2 3 -4 5 -6 7 -8
```

#### Output Sample:
```bash
Negative numbers in the given array are:
-2 -4 -6 -8
```

#### Algorithm:
1. **Initialize Pointers**:
   - `i` starts from the beginning of the array.
   - `j` starts from the end of the array.
   
2. **Segregate Negative Numbers**:
   - Move `i` rightward until a non-negative number is found.
   - Move `j` leftward until a negative number is found.
   - Swap the negative and non-negative numbers if `i` is less than `j`.
   
3. **Print Negative Numbers**:
   - After the segregation, traverse the array and print only the negative numbers.

### Additional Notes:
- **Efficiency**: The algorithm efficiently segregates negative numbers in a single pass with O(n) time complexity.
- **Edge Cases**: The program assumes that the array has at least one negative number. If there are no negative numbers or if the array is empty,
                  it will not print anything.
*/


#include <stdio.h>

void printNegative(int arr[], int n)
{
    int i = 0, j = n - 1;
    
    while (i < j)
    {
        while (arr[i] < 0 && i < j)
        {
            i++;
        }
        
        while (arr[j] >= 0 && i < j)
        {
            j--;
        }
        
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    // Print only the negative numbers
    for (int k = 0; k < n; k++)
    {
        if (arr[k] < 0)
        {
            printf("%d ", arr[k]);
        }
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Negative numbers in the given array are:\n");
    printNegative(arr, n);
    return 0;
}

