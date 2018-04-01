#include <stdio.h>
#include <stdlib.h>

int isLeapYear();

int main(int argc, char* argv[]) {
    printf("Enter your date in dd/mm/yyyy format: ");
    int dd, mm, yyyy, daysinmonth;
    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) {
        printf("Unable to parse the date provided, please try again.\n");
        exit(EXIT_FAILURE);
    }
    // Figure out days in current month
    daysinmonth = 31;
    if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
        daysinmonth = 30;
    else if (mm == 2) {
        daysinmonth = 28;
        if (isLeapYear(yyyy)) {
            printf("It has been noted that this year is a leap year!\n");
            daysinmonth = 29;
        }
    }
    if (dd > daysinmonth) {
        printf("The date you entered can be parsed, but it is invalid.\n");
        exit(EXIT_FAILURE);
    }
    if (dd == daysinmonth) {
        if (mm == 12){
            yyyy++;
            mm = 0;
        }
        mm++;
        dd = 1;
    }
    else {
        dd++;
    }
    printf("Tomorrow is %02d/%02d/%02d\n", dd, mm, yyyy);
}

int isLeapYear(int year) {
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
            return year % 400 == 0;
        return  1;
    }
    return 0;
}
