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
    int size1, size2, size3, i, j;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of the first array:\n");
    for(i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("\nfirst array:");
    for(i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nEnter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements of the second array:\n");
    for(i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("second array:");
    for(i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    size3 = size1 + size2;
    int arr3[size3];
    for(i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }
    for(j = 0; j < size2; j++) {
        arr3[i] = arr2[j];
        i++;
    }
    printf("\nThe merged array:\n");
    for(i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}

// Program End
