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


// Program End
