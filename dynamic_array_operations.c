#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 2;         
    int size = 0;            
    int *arr = malloc(capacity * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    void insert(int element) {
        if (size == capacity) {
            capacity *= 2;
            int *temp = realloc(arr, capacity * sizeof(int));
            if (!temp) {
                printf("Reallocation failed\n");
                free(arr);
                exit(1);
            }
            arr = temp;
        }
        arr[size++] = element;
    }

   
    void deleteAt(int index) {
        if (index < 0 || index >= size) {
            printf("Invalid index\n");
            return;
        }
        for (int i = index; i < size -1; i++)
            arr[i] = arr[i+1];
        size--;
    }

    
    void print() {
        printf("Array: ");
        for (int i = 0; i < size; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }

    
    insert(10);
    insert(20);
    insert(30);
    print();        

    deleteAt(1);
    print();         

    free(arr);
    return 0;
}

