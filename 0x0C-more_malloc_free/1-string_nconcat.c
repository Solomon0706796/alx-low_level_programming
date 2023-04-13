#include <stdlib.h> // Required for malloc function
#include <string.h> // Required for strlen and strncpy functions

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    // Treat NULL as an empty string
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }

    // Calculate length of s1 and s2
    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);

    // Use the entire s2 if n is greater or equal to its length
    if (n >= s2_len) {
        n = s2_len;
    }

    // Allocate memory for the concatenated string
    char *concat = (char *)malloc((s1_len + n + 1) * sizeof(char));

    // Check if memory allocation was successful
    if (concat == NULL) {
        return NULL;
    }

    // Copy s1 to the concatenated string
    strncpy(concat, s1, s1_len);

    // Copy the first n bytes of s2 to the concatenated string
    strncpy(concat + s1_len, s2, n);

    // Null-terminate the concatenated string
    concat[s1_len + n] = '\0';

    return concat;
}

