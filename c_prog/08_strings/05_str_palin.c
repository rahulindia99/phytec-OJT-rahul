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

int main() {
    char str[100];
    int len, i, j, flag = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    
    if (flag == 1) {
        printf("%s is a palindrome", str);
    } else {
        printf("%s is not a palindrome", str);
    }
    
    return 0;
}


// Program End
