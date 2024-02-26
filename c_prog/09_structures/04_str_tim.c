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
    int hours;
    int minutes;
    int seconds;
} Time;

Time difference(Time t1, Time t2);

int main() {
    Time startTime, endTime, diffTime;
    
    printf("Enter start time (hours, minutes, seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    
    printf("Enter end time (hours, minutes, seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    
    diffTime = difference(startTime, endTime);
    
    printf("Time difference: %d hours, %d minutes, %d seconds\n", diffTime.hours, diffTime.minutes, diffTime.seconds);
    
    return 0;
}

Time difference(Time t1, Time t2) {
    Time diff;
    int t1Seconds, t2Seconds, diffSeconds;
    
    t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    
    diffSeconds = t2Seconds - t1Seconds;
    
    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diffSeconds %= 60;
    diff.seconds = diffSeconds;
    
    return diff;
}


// Program End
