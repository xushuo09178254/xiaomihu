#include<stdio.h>
int main()
{
	int x;
	int cnt = 0;
	//scanf("%d",&x);
	
	//for(x=2;x<100;x++)
	while(cnt<50)
	{
	
		int i;
		int isPrime = 1;  //x������ 
		for(i=2;i<x;i++){
			if(x%i==0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime==1){
			printf("%d\n",x);
			cnt++;
			/*printf("������\n");
		}else{
			printf("��������\n"); */
		}
		x++;
    }
    printf("\n");
    
	return 0;
}
