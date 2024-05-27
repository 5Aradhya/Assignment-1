#include <stdio.h>
int main()
{
    int days;
    days = 1329;
    int outputyears = days / 365;
    int dontshowyears = days % 365;
    int outputweeks = dontshowyears / 7;
    int outputdays = dontshowyears % 7;

    printf("%d years", outputyears);
    printf("%d weeks", outputweeks);
    printf("%days", outputdays);
}
