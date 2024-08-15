#### Description:
  This C program removes duplicate elements from an array. 
  It reads the size and elements of the array from the user, 
  then uses the `removeDuplicates` function to filter out duplicates and store the unique elements in a new array. 
  The program then prints the array with duplicates removed.

#### Input Sample:
```bash
Enter the size of the array: 6
Enter the elements of the array:
1 2 2 3 4 4
```

#### Output Sample:
```bash
Array after removing duplicates: 1 2 3 4
```

#### Algorithm:
1. **Initialize**: 
   - `idx` to keep track of the position in the new array `arr2`.
   
2. **Traverse the input array `arr1`**:
   - For each element in `arr1`, check if it is already present in `arr2` up to the current `idx`.
   - If the element is not found (i.e., `j` equals `idx`), it is a unique element and should be added to `arr2`.
   
3. **Update `new_size`**:
   - Set `*new_size` to the number of unique elements found.

4. **Print the unique elements**:
   - Traverse the new array `arr2` up to `new_size` and print each element.

### Additional Notes:
- **Efficiency**: The current approach has a time complexity of O(n^2) due to the nested loop for checking duplicates.
  For larger arrays, consider using a more efficient approach with hash tables or sorting the array first.
- **Edge Cases**: Handle cases where the input array might be empty or where all elements are duplicates.




#include <stdio.h>

void removeDuplicates(int arr1[], int size, int arr2[], int *new_size) {
    int idx = 0;
    
    for (int i = 0; i < size; i++) 
    {
        int j;
        for (j = 0; j < idx; j++) 
        {
            if (arr2[j] == arr1[i]) 
                break;
        }
        if (j == idx) 
            arr2[idx++] = arr1[i];
    }

    *new_size = idx;
}

int main() {
    int size;
    // printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr1[size];
    // printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    
    int arr2[size];
    int new_size;
    
    removeDuplicates(arr1, size, arr2, &new_size);
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < new_size; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}

