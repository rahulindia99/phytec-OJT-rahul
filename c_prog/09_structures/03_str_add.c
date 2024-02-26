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

typedef struct {
    float real;
    float imag;
} complex;

complex add(complex a, complex b);

int main() {
    complex num1, num2, result;
    
    printf("Enter real and imaginary parts of first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);
    
    printf("Enter real and imaginary parts of second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);
    
    result = add(num1, num2);
    
    printf("Sum = %.2f + %.2fi\n", result.real, result.imag);
    
    return 0;
}

complex add(complex a, complex b) {
    complex result;
    
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    
    return result;
}


// Program End
