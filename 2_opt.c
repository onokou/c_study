#include<stdio.h>
#include <math.h>


double distance(int x1 ,int y1 ,int x2 ,int y2){
return sqrt(    ((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2))   );
}




int main(void)
{
    
    int a;
    a=10;
    a+=10;
    printf("hello Okamoto\n");
    printf("%d",a);
    double aaa;
    aaa = distance(1,2,3,4);
    printf("aaa%f",aaa);
    return 0;

}