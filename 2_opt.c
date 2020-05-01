#include<stdio.h>
#include <stdlib.h>

#include <math.h>


double distance(int x1 ,int y1 ,int x2 ,int y2){
return sqrt(    ((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2))   );
}
int two_opt_swap(int *customer, int *x, int *y){
    for(int i=0;i<100;i++){
        //printf("%d\n",customer[i]);
        customer[i]=1;
    }
    return 0;
}



int main(void)
{
    int customer_list[100];
    int position_list[100][2];
    for(int i=0;i<100;i++){
        customer_list[i]=i;
        position_list[i][0]=rand()%100;
        position_list[i][1]=rand()%100;
    }
    /*
    for(int i=0;i<100;i++){
         printf("%d\n",customer_list[i]);
    }
    
    int a=two_opt_swap(customer_list,customer_list,customer_list);
    for(int i=0;i<100;i++){
            printf("%d\n",customer_list[i]);
        }


    
    */
   int a=two_opt_swap(customer_list,customer_list,customer_list);

    int array[] = {1,2,3,4,5};

int *ptr = array;
printf("%p\n",ptr);
ptr[1]=10;
(ptr+1)=12;
printf("%d\n",*(ptr+1));
printf("%d",ptr[1]);
    return 0;

}