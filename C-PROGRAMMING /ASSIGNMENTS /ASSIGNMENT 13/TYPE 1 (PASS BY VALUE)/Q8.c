//7. Time (hour, min, sec)
#include <stdio.h>

typedef struct 
{
    int hour;
    int min;
    int sec;
} Time;

void store(Time t) 
{
    t.hour = 7;
    t.min = 7;
    t.sec = 70;

    printf("Values in Store\n");
    printf("Time: %d hrs:%d mins:%d secs\n", t.hour, t.min, t.sec);
}

void display(Time t) 
{
    printf("Values in Display\n");
   printf("Time: %d hrs:%d mins:%d secs\n", t.hour, t.min, t.sec);
}

void main() 
{
    Time t1 = {0, 0, 0};
    store(t1);
    display(t1);
}




//8. Distance ( feet, inch)

#include <stdio.h>

typedef struct 
{
    int feet;
    int inch;
} Distance;

void store(Distance d) 
{
    d.feet = 5;
    d.inch = 8;

    printf("Values in Store\n");
    printf("Distance: %d feet %d inches\n", d.feet, d.inch);
}

void display(Distance d) 
{
    printf("Values in Display\n");
    printf("Distance: %d feet %d inches\n", d.feet, d.inch);
}

void main() 
{
    Distance d1 = {0, 0};
    store(d1);
    display(d1);
}

