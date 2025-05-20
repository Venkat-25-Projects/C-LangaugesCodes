#include<stdio.h>

// Bubble Sort function
void sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)  // Outer loop for number of passes
    {
        for(int j = 0; j < size - 1 - i; j++)  // Inner loop for comparing adjacent elements
        {
            if(array[j] > array[j + 1])  // Swap if elements are in the wrong order
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)  // Loop to print each element in the array
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    // Initial array
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);  // Calculate array size
    
    // Sorting the array
    sort(array, size);
    
    // Printing the sorted array
    printArray(array, size);
    
    return 0;
}

