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
#include <string.h>

struct Student {
    char name[50];
    int rollno;
    float marks;
};

int main() {
    struct Student s;
    
    printf("Enter name: ");
    scanf("%s", s.name);
    
    printf("Enter roll no.: ");
    scanf("%d", &s.rollno);
    
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    
    printf("\nStudent Information\n");
    printf("Name: %s\n", s.name);
    printf("Roll No.: %d\n", s.rollno);
    printf("Marks: %.2f\n", s.marks);
    
    return 0;
}


// Program End
