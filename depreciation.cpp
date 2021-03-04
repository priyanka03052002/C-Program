#include<stdio.h>
#include<math.h>
int main()
{
    float pp,sv,ys,dep;
    printf("input pp,sv,ys");
    scanf("%f%f%F,pp,sv,ys");
    dep=((pp-sv)/ys);
    printf("yearly depreciation of the value of this item=%f",dep);
    return 0;
}
