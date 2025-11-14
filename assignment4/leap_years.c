#include <stdio.h>
#include "base.h"

int number_of_days(int year);

int main(void) {
    test_equal_i(number_of_days(2020), 366);
    test_equal_i(number_of_days(1900), 365);
    test_equal_i(number_of_days(2000), 366);
    test_equal_i(number_of_days(2021), 365);
}

/*Return the number of days in the given year.A leap year has 366 days, a
non-leap year has 365 days. The input represents any year A. D. as an integer, the
return value is the number of days.*/
int number_of_days(int year) {
    // Leap Years are any year that can be exactly divided by 4
    int multiple_of_four = year % 4 == 0;
    // except if it can be exactly divided by 100, then it isn't
    int multiple_of_hundred = year % 100 == 0;
    // except if it can be exactly divided by 400, then it is
    int multiple_of_fourhundred = year % 400 == 0;

    if(multiple_of_four && (!multiple_of_hundred || multiple_of_fourhundred)) {
        return 366;
    }
    else {
        return 365;
    }
    return 0;
}