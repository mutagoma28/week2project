#include <stdlib.h>
#include<stdio.h>
int main()
{
int stock[]={500,300,330,85,785};
int i;
int a=0;
int b;
    for(i=0; i<5 ; i+1){
    	a=a + stock[i];
    	b=a / 5;
	printf("Product %d Stock:%d\n",i+=1,stock[i]);
}
   
    printf("Total Stock:%d\n",a);
    
    printf("Average stock:%d\n",b);

	return 0;
}