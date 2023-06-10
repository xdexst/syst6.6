#include <stdio.h>

int main() {
	printf("Test v6.6: OK.\n");
	
	int i,j,k,a[10];
	
	for(i=0;i<10;i++) a[i]=0;
	printf("For now array looks like:\n");
	for(j=0;j<10;j++) {
		if(j==9) {
			printf("%d\n", a[j]);
		} else {
			printf("%d, ", a[j]);
		}
	}
	
	for(i=0;i<10;i++) {
		for(k=0;k<9;k++) {
			a[k]=a[k+1];
		}
		printf("Enter your number:\n");
		scanf("%d",&a[9]);
		printf("For now array looks like:\n");
		for(j=0;j<10;j++) {
			if(j==9) {
				printf("%d\n", a[j]);
			} else {
				printf("%d, ", a[j]);
			}
		}
		
	}
	
	return 0;
}
