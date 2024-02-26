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

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1, d2, sum;
    
    printf("Enter first distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);
    
    printf("Enter second distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);
    
    sum.inches = d1.inches + d2.inches;
    sum.feet = d1.feet + d2.feet + (sum.inches / 12);
    sum.inches %= 12;
    
    printf("\nSum of distances: %d feet %d inches", sum.feet, sum.inches);
    
    return 0;
}


// Program End
