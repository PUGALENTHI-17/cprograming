#include <stdio.h>
#include <string.h>

int main() {
    char *myArray[] = {"apple", "banana", "cherry", "apple", "orange", "banana"};
    int len = sizeof(myArray) / sizeof(myArray[0]);
    char *duplicates[len];
    
    int num_duplicates = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (strcmp(myArray[i], myArray[j]) == 0) {
                // check if string is already in duplicates array
                int found = 0;
                for (int k = 0; k < num_duplicates; k++) {
                    if (strcmp(myArray[i], duplicates[k]) == 0) {
                        found = 1;
                        break;
                    }
                }
                // add string to duplicates array if not already present
                if (!found) {
                    duplicates[num_duplicates] = myArray[i];
                    num_duplicates++;
                }
            }
        }
    }
    
    // sort duplicates array in ascending order using bubble sort
    for (int i = 0; i < num_duplicates - 1; i++) {
        for (int j = 0; j < num_duplicates - i - 1; j++) {
            if (strcmp(duplicates[j], duplicates[j+1]) > 0) {
                char *temp = duplicates[j];
                duplicates[j] = duplicates[j+1];
                duplicates[j+1] = temp;
            }
        }
    }
    
    printf("Number of strings present more than once: %d\n", num_duplicates);
    printf("Strings present more than once: ");
    for (int i = 0; i < num_duplicates; i++) {
        printf("%s ", duplicates[i]);
    }
    printf("\n");
    
    return 0;
}