#include <stdio.h>
int num_arr1,num_arr2,num_arr3,arr1[5],arr2[5],arr3[10];

	fung_arr1(){
		for(int i=0;i<=num_arr1-1;i++){
				printf("arr1[%d] : ",i);
				scanf("%d",&arr1[i]);
	}}

	fung_arr2(){
		for(int i=num_arr1;i<=num_arr3-1;i++){
				printf("arr2[%d] : ",i);
				scanf("%d",&arr1[i]);
	}}
	
	fung_arr3(){
		printf("Input Count = %d\n",num_arr3);
		for(int i=0;i<=num_arr3-1;i++){
			arr3[i]=arr1[i]+arr2[i];
			printf("Merge[%d] =  %d \n",i,arr3[i]);
		}}
		
		
int main()
{
	printf("Please Enter Index Array : ");
	scanf("%d",&num_arr1);
	printf("Please Enter Index Array : ");
	scanf("%d",&num_arr2);
	num_arr3=num_arr1+num_arr2;
	printf("\n");
	fung_arr1();
	printf("\n");
	fung_arr2();
	printf("\n");
	fung_arr3();
}
