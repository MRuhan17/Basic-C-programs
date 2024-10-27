#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;
    
    // Prompt the user to enter the number of elements for the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    
    int array1[n1]; // Declare the first array

    // Input the elements of the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &array1[i]);
    }

    // Prompt the user to enter the number of elements for the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    
    int array2[n2]; // Declare the second array

    // Input the elements of the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }

    // Declare an array to store the intersection elements
    int intersection[n1 < n2 ? n1 : n2]; // Maximum size of intersection cannot exceed the smaller array size

    // Find the intersection of both arrays
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (array1[i] == array2[j]) {
                // Check for duplicates in the intersection array
                int isDuplicate = 0;
                for (int m = 0; m < k; m++) {
                    if (intersection[m] == array1[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                // If not a duplicate, add to intersection
                if (!isDuplicate) {
                    intersection[k] = array1[i];
                    k++;
                }
            }
        }
    }

    // Display the result
    if (k > 0) {
        printf("Intersection of the two arrays:\n");
        for (i = 0; i < k; i++) {
            printf("%d ", intersection[i]);
        }
        printf("\n");
    } else {
        printf("No intersection found between the two arrays.\n");
    }

    return 0;
}
