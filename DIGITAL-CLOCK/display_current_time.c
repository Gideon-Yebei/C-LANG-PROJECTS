//
// Created by GKY on 11/19/2023.
//

#include "display_current_time.h"
#include <stdio.h>  // for printf() function
#include <Time.h>   // for time() function
#include <unistd.h> // for sleep() function

_Noreturn int displayCurrentTime() {
    // initialize time
    time_t t;                      // declare time_t variable
    t = time(NULL);                // get current time
    struct tm *tm = localtime(&t); // convert time to struct tm
    int hour = tm->tm_hour;        // get hour
    int minute = tm->tm_min;       // get minute
    int second = tm->tm_sec;       // get second

    while (1) {                                                      // while loop
        system("clear");                                    // clear screen
        printf("%02d : %02d : %02d", hour, minute, second); // print time
        fflush(stdout);                                     // flush stdout buffer

        second++; // increment second
        if (second == 60) { // if second is 60, increment minute
            minute++;
            second = 0;
        }
        if (minute == 60) { // if minute is 60, increment hour
            minute += 1;
            second = 0;
        }
        if (minute == 60) { // if minute is 60, increment hour
            hour += 1;
            minute = 0;
        }
        if (hour == 24) { // if hour is 24, reset hour and minute to 0
            hour = 0;
            minute = 0;
            second = 0;
        }
        sleep(1); // sleep for 1 second
    }
}