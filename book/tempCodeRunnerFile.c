#include <stdio.h>

int main() {
    int size, ele, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

     
    printf("Enter the element to search: ");
    scanf("%d", &ele);

    
    for (int i = 0; i < size; i++) {
        if (ele == arr[i]) {
            printf("Element %d found at index %d\n", ele, i);
            found = 1;
            break;
        }
    }

    // If element is not found
    if (!found) {
        printf("Element %d not found in the array\n", ele);
    }

    return 0;
}
