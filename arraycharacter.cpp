#include<stdio.h>

// Bubble Sort function for characters
void sort(char array[], int size)
{
    for(int i = 0; i < size - 1; i++)  // Outer loop for number of passes
    {
        for(int j = 0; j < size - 1 - i; j++)  // Inner loop for comparing adjacent elements
        {
            if(array[j] > array[j + 1])  // Swap if elements are in the wrong order
            {
                char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to print the array of characters
void printArray(char array[], int size)
{
    for(int i = 0; i < size; i++)  // Loop to print each character in the array
    {
        printf("%c ", array[i]);
    }
    printf("\n");
}

int main()
{
    // Initial character array
    char array[] = {'g', 'b', 'e', 'a', 'd', 'c', 'f'};
    int size = sizeof(array) / sizeof(array[0]);  // Calculate array size
    
    // Sorting the array
    sort(array, size);
    
    // Printing the sorted array
    printArray(array, size);
    
    return 0;
}

