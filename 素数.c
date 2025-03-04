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
		int isPrime = 1;  //xÊÇËØÊý 
		for(i=2;i<x;i++){
			if(x%i==0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime==1){
			printf("%d\n",x);
			cnt++;
			/*printf("ÊÇËØÊý\n");
		}else{
			printf("²»ÊÇËØÊý\n"); */
		}
		x++;
    }
    printf("\n");
    
	return 0;
}
