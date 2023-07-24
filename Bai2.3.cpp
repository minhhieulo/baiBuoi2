#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
    float a,b,c;
	printf("Nhap vao 3 so nguyen duong : ");
	scanf("%f %f %f",&a,&b,&c);
	 if(abs(a-c)<b && b<(a+c)){
	 	printf("ba so tao thanh 1 tam giac \n") ;
	 } else{
	 	printf("ba So kho tao thanh 1 tam giac \n") ;
	 	
	 } 
  return 0 ; 
}
