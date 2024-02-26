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
    FILE *fp;
    char filename[100];
    char ch;
    int charCount = 0, wordCount = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        charCount++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            wordCount++;
        }
    }

    fclose(fp);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount + 1);

    return 0;
}


// Program End
