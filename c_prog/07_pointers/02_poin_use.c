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
    int m = 300;
    float fx = 300.6;
    char cht = 'z';

    printf("Pointer : Demonstrate the use of & and * operator :\n");
    printf("--------------------------------------------------------\n");
    printf(" m = %d\n", m);
    printf(" fx = %f\n", fx);
    printf(" cht = %c\n", cht);

    printf("\n Using & operator :\n");
    printf("-----------------------\n");
    printf(" address of m = %p\n", &m);
    printf(" address of fx = %p\n", &fx);
    printf(" address of cht = %p\n", &cht);

    printf("\n Using & and * operator :\n");
    printf("----------------------------\n");
    printf(" value at address of m = %d\n", *(&m));
    printf(" value at address of fx = %f\n", *(&fx));
    printf(" value at address of cht = %c\n", *(&cht));

    int *m_ptr = &m;
    float *fx_ptr = &fx;
    char *cht_ptr = &cht;

    printf("\n Using only pointer variable :\n");
    printf("----------------------------------\n");
    printf(" address of m = %p\n", m_ptr);
    printf(" address of fx = %p\n", fx_ptr);
    printf(" address of cht = %p\n", cht_ptr);

    printf("\n Using only pointer operator :\n");
    printf("----------------------------------\n");
    printf(" value at address of m = %d\n", *m_ptr);
    printf(" value at address of fx= %f\n", *fx_ptr);
    printf(" value at address of cht= %c\n", *cht_ptr);

    return 0;
}

// Program End
