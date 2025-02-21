#include <stdio.h>
int main ()
{
    struct date
    {
        int day;
        int month;
        int year;
    };

    struct date today, tomorrow;
    int i, daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    
    printf("Enter the date today (dd/mm/yyyy):\n");
    scanf("%d/%d/%d\n",&today.day,&today.month,&today.year);

    if(today.day != daysPerMonth[today.month-1])
    {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if(today.month == 12)
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else if(((today.year%4 == 0 && today.year%100 != 0) || today.year%400 == 0) && today.day == daysPerMonth[today.month-1])
    {
        tomorrow.day = today.day +1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else
    {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    

    printf("Tomorrows date is:\n%d/%d/%d\n",tomorrow.day,tomorrow.month,tomorrow.year);
    
}