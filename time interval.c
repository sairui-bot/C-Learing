#include <stdio.h>
#include <stdlib.h>

int main()

{

int hour1, minute1;
int hour2, minute2;

printf("Please enter first time!\n");

scanf("%d:%d", &hour1, &minute1);

printf("Nice! Next one.\n");

scanf("%d:%d", &hour2, &minute2);

int t1 = hour1*60 + minute1;
int t2 = hour2*60 + minute2;
int t = t2-t1;

printf("Time interval is %dh %dmin!\n", t/60, t%60);

system("pause");

return 0;

}
