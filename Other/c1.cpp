#include <stdio.h>
#include <conio.h>
int main()
{
    char name[5] ;
    int i;
    int learn[5];
    int midtarm[5];
    int final[5];
    int score[5];
    int a = 1;
    
    
    while(a){
	
		for(  i = 0; i < 2; i++) {
        printf("Enter name is [%d]: ",i+1);
        scanf("%s",&name[i]);
    	}
    
		for( i = 0; i < 2; i++){
        	printf("no [%d]= name is : %s \n",i+1,&name[i]);
			printf("Enter Score learn : ");
			scanf("%d",&learn[i]);		
			printf("Enter Score midtrarm : ");
			scanf("%d",&midtarm[i]);	
			printf("Enter Score final : ");
			scanf("%d",&final[i]);	
   		}
   		for( i = 0; i< 2 ; i++){
   			score[i] = learn[i] + midtarm[i] + final[i];
   			if(score[i] >= 80){
   				printf("\n no [%d]  name %s = Score is %d  you grade A \n",i+1,&name[i],score[i]);
			   }
			else if(score[i]){
				printf("\n no [%d]  name %s = Score is %d  you grade B \n",i+1,&name[i],score[i]);
			}
			else if(score[i]){
				printf("\n no [%d]  name %s = Score is %d  you grade C \n",i+1,&name[i],score[i]);
			}
			else if(score[i]){
				printf("\n no [%d]  name %s = Score is %d  you grade D \n",i+1,&name[i],score[i]);
			}
			else if(score[i]){
				printf("\n no [%d]  name %s = Score is %d you grade F \n",i+1,&name[i]),score[i];
			}
		}
   		
	}
     getch();
	
    


}
