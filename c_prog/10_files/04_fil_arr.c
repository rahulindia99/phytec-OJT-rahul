/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author:
 * Title:
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[100], buffer[100];
    char **lines;
    int num_lines = 0, i;

    
    printf("Enter the filename: ");
    scanf("%s", filename);

    
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    while (fgets(buffer, sizeof(buffer), fptr)) {
        num_lines++;
    }

    
    lines = (char **) malloc(num_lines * sizeof(char *));
    if (lines == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    
    fseek(fptr, 0, SEEK_SET);

    
    for (i = 0; i < num_lines; i++) {
        if (fgets(buffer, sizeof(buffer), fptr)) {
            lines[i] = (char *) malloc(strlen(buffer) + 1);
            if (lines[i] == NULL) {
                printf("Error allocating memory.\n");
                return 1;
            }
            strcpy(lines[i], buffer);
        }
    }

    
    fclose(fptr);

    
    printf("File contents:\n");
    for (i = 0; i < num_lines; i++) {
        printf("%s", lines[i]);
    }

    
    for (i = 0; i < num_lines; i++) {
        free(lines[i]);
    }
    free(lines);

    return 0;
}


// Program End
