//find the area of a rectangle prism formula:a=2(wl+hl+hw)

#include<stdio.h>
void main()
{
    int w,l,h,area;
    printf("Enter w:");
    scanf("%d",&w);

    printf("Enter h:");
    scanf("%d",&h);

    printf("Enter l:");
    scanf("%d",&l);

    area =2*(w*l+h*l+h*w);

    printf("a=2(wl+hl+hw): %d",area);
}
