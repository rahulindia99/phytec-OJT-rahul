#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100], c;

    
    printf("Enter the filename: ");
    scanf("%s", filename);

    
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    printf("File contents:\n");
    while ((c = fgetc(fptr)) != EOF) {
        printf("%c", c);
    }


    fclose(fptr);

    return 0;
}
