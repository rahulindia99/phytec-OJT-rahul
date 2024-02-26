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

struct student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    struct student s[5];
    int i;

    
    for(i=0; i<5; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_number);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    
    printf("\nDetails of 5 students:\n");
    for(i=0; i<5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_number);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}

// Program End
