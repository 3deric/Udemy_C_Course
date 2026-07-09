#include <stdio.h>

struct point1{
    double x; 
    double y;
};

struct point2
{
    double x; 
    double y;
};

struct point3
{
    double x;
    double y;
};

struct point4
{
    double x;
    double y;
};

typedef struct
{
    double x;
    double y
} point5;

typedef struct
{
    double x;
    double y;
} point6;

typedef struct
{
    double x;
    double y;
} point 7;

// Is here an issue? :)
typedef struct point8
{
    double x;
    double y;
} point8_t;


struct point4
{
    double x;
    double y;
};

typedef struct point5
{
    double x;
    double y
} point5_T;

typedef struct point6
{
    double x;
    double y;
} point6_t;

typedef struct
{
    double x;
    double y;
};


typedef struct
{
    double x;
    double y;
} point7;



int main()
{
    


    return 0;
}