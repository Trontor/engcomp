#include <stdio.h>
#include <stdlib.h>

int isLeapYear();

int main(int argc, char* argv[]) {
    printf("Enter date in dd/mm/yyyy format: ");
    int dd, mm, yyyy, daysinmonth;
    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) {
        printf("You have entered an invalid input!\n");
        exit(EXIT_FAILURE);
    }
    int totalDays = 0;
    for (int i = 1; i < mm; i++) {
        // Figure out days in current month
        daysinmonth = 31;
        if (i == 4 || i == 6 || i == 9 || i == 11)
            daysinmonth = 30;
        else if (i == 2) {
            daysinmonth = 28;
            if (isLeapYear(yyyy)) {
                printf("It has been noted that this year is a leap year!\n");
                daysinmonth = 29;
            }
        }
        totalDays += daysinmonth;
    }
    totalDays += dd;
    printf("The date entered is day number %d of the year.\n", totalDays);
    return 0;
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
