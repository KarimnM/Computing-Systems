#include <stdio.h>
const int n =4;
void oneD(int one[]){
 int i;
	for(i =0; i<4;i++)
	printf("%d", one[i]);

}
void twoD(int two[][n]){
int i, j;
	for(i=0; i<3;i++)
	for(j=0;j<n;j++)
	printf("%d ", two[i][j]);
}


int main(){

	int arrone[4]={0,1,2,4};
	int arr[3][4]={{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}};
	printf("%p %p %p %p\n", &arr[0][0], &arr[0][1], &arr[0][2], &arr[0][3]);
	printf("%p %p %p %p\n", &arr[1][0], &arr[1][1], &arr[1][2], &arr[1][3]);
	printf("%p %p %p %p\n", &arr[2][0], &arr[2][1], &arr[2][2], &arr[2][3]);
	 oneD(arrone);
	printf("\n");
	twoD(arr);	
	printf("\n");
	 int d[3] = { 1, 2, 3 };
	 
   printf("sizeof(d) = %u\n", sizeof(int));
    printf("sizeof(d) = %u\n", sizeof(3.14));


	return 0;

}
