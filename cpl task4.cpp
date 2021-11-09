#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main () {
	/* n variable for number of rows 
	   m variable for number of columns
	   x variable is the number we search for
	   i for rows in loops
	   j for columns in loops
	   y for rand function
	   n is an indicator
	   */
	int n,m,x,i,j,y,b;
	int a[n][m];
	printf("enter the number of rows: ");
	scanf("%d",&n);
	printf("enter the number of columns: ");
	scanf("%d",&m);
	srand(time(NULL));
	// this nested loop for printing the array 
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			y=rand()%10;
			a[i][j]=y;			
			printf("%d ",y);
		}printf("\n");
	}
	//this nested loop for searching for x
	printf("enter the number of x that you want to search for: ");
	scanf("%d",&x);			
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			if (x==y){
				b=1;	
			}
		
		}
}	
	if (b==1){
		printf("found the number %d in the array",x);
	}
	else {
		printf("didn't found the number %d in the array",x);
	}
	return 0;
}


