#include <stdio.h>
int main(){
	int table, len;
	printf("Enter the table number: ");
	scanf("%d", &table);
	printf("Enter the length of the table: ");
	scanf("%d", &len);
	
	if(len>100){
		printf("Error! Table length can't be exceed to 100\n");
	}
	
	else{
		int i;
		for(i=1;i<=len;i++){
			printf("%d X %d = %d\n", table,i,table*i);
		}
	}
	return 0;
}
