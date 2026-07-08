#include <stdio.h>
int main() 
{
    enum day{ mon,tue,wed,thurs,fri,sat,sun};
    enum day  week_st,week_end;
    week_st = mon;
    week_end = sun;
    printf("week_st \t%d\n", week_st);
    printf("week_end \t%d\n ",week_end);
    return 0;
}