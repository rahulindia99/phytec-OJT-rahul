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
    int rows, cols, i, j, sum;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
     printf(" matrix:\n");
    for(i = 0; i < rows; i++) {
        
        for(j = 0; j < cols; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The sum of each row of the matrix:\n");
    for(i = 0; i < rows; i++) {
        sum = 0;
        for(j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("%d\n", sum);
    }
    return 0;
}


// Program End
