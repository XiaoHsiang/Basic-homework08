#include<stdio.h>
#include<stdlib.h>
int main(void){
	int factor=2;
	int n;
	printf("1-n��ơA�п�Jn:");
	scanf("%d�B",&n);
	for(int i=2;i<=n;i++){
		if(i==2){
			printf("%d",i);
			printf(" ");
			continue;
		}
		while(i%factor!=0&&factor<=i){
			factor+=1;
			if(factor/i==1){
				printf("%d",i);
				printf(" ");
				factor=2;
				break;
			} 
			if(i%factor==0){
				factor=2;
				break;
			}	
		}
	}
	system("pause");
	return 0;
}
