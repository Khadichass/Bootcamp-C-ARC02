// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(void)
// {
//    char* arr = (char*) malloc(20 * sizeof(char));
//    strcpy(arr, "Hello World");
//    char* seperator = malloc(3 * sizeof(char));
//    strcpy(seperator, "l");

//    printf("%s\n" , strtok(arr, seperator));

// }


// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(void)
// {
//     char* arr = (char*) malloc(20 * sizeof(char));
//     strcpy(arr, "Hello World");
//     char* separator = malloc(3 * sizeof(char));
//     strcpy(separator, "W");

//     char* token = strtok(arr, separator);
//     while (token != NULL) {
//         printf("%s\n", token);
//         token = strtok(NULL, separator);
//     }

//     free(arr);
//     free(separator);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold the result array
typedef struct {
    char** array;
    int size;
} string_array;

string_array* my_split(char* param_1, char* param_2) {
    // Check for NULL input
    if (param_1 == NULL || param_2 == NULL) {
        return NULL;
    }

    // Initialize variables
    int count = 0;
    int index = 0;
    int inSubstring = 0;

    // Count the number of substrings
    for (int i = 0; param_1[i] != '\0'; i++) {
        if (param_1[i] == param_2[0]) {
            if (inSubstring) {
                inSubstring = 0;
                count++;
            }
        } else {
            inSubstring = 1;
        }
    }

    // Handle the case when the last character is not a separator
    if (inSubstring) {
        count++;
    }

    // Allocate memory for the result array
    string_array* result = (string_array*)malloc(sizeof(string_array));
    result->array = (char**)malloc(count * sizeof(char*));
    result->size = count;

    // Process the string and populate the result array
    inSubstring = 0;
    for (int i = 0; param_1[i] != '\0'; i++) {
        if (param_1[i] == param_2[0]) {
            if (inSubstring) {
                inSubstring = 0;
                param_1[i] = '\0';  // Replace separator with null character
            }
        } else {
            if (!inSubstring) {
                result->array[index++] = &param_1[i];
                inSubstring = 1;
            }
        }
    }

    return result;
}

int main(void) {
    // Example usage
    char input1[] = "abc def gh-!";
    char separator1[] = "d";
    string_array* output1 = my_split(input1, separator1);

    for (int i = 0; i < output1->size; i++) {
        printf("%s\n", output1->array[i]);
    }

    // Free allocated memory
    free(output1->array);
    free(output1);

    return 0;
}
