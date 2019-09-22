#include<stdio.h>
int main()
{
    double VOLUME;
    float R;
    scanf("%f",&R);

    VOLUME = (4.0/3)*3.14159*(R*R*R);

    printf("VOLUME = %.3lf\n",VOLUME);

    return 0;
}


