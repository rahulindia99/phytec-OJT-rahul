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

int main() {
    FILE *fptr;
    char filename[100], sentence[100];

    
    printf("Enter the filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    printf("Enter some lines of text (press Ctrl+D to end):\n");
    while (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        fprintf(fptr, "%s", sentence);
    }


    fclose(fptr);

    printf("File written successfully.\n");

    return 0;
}


// Program End
