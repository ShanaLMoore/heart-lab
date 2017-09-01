//
//  heart-lab.c
//  heart-lab
//
//  Created by Shana Moore on 9/1/17.
//  Copyright © 2017 Shana Moore. All rights reserved.
//

#include <stdio.h>
# define HEARTBEATS_PER_SECOND 1 // conversion constant
# define SECONDS_PER_MINUTE 60 // conversion constant
# define MINUTES_PER_HOUR 60 // conversion constant
# define HOURS_PER_DAY 24 // conversion constant
# define DAYS_PER_YEAR 365 // conversion constant

int main(void) {
    // Declare variables with appropriate data types
    FILE *fp = NULL;
    
    int years = 0, total_seconds = 0;
    
    // Assign values
    years = 50;
    
    // Output to file + handle error case
    fp = fopen("csis.txt", "w");
    if (NULL == fp) {
        perror("opening csis.txt failed");
        return -1;
    }
    
    // Compute how many times the heart beats in 50 years
    total_seconds = HEARTBEATS_PER_SECOND * SECONDS_PER_MINUTE *
                    MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_YEAR *
                    years;
    
    // Display # of heart beats in 50 years
    printf("The heart beats %d times in 50 years.\n", total_seconds);
    fprintf(fp, "The heart beats %d times in 50 years.\n", total_seconds);
    
    fclose(fp);
    return 0;
}
