#include "stdio.h"
#include "conio.h"

int main(){
	
	char name[5];
	int i;
	int learn[5];
	int midtarm[5];
	int final[5];
	int score[5];
	int a ;
	
		while(1){
		printf("\t=====Student Grade Calculation=====\n");
		printf("\t\t\t==Menu==\n");
		printf("\t[1]Enter student name\n");
		printf("\t[2]Enter student score\n");
		printf("\t[3]Enter calculat grade\n");
		printf("\t[0]Exit\n");
		printf("\tSelect 1,2,3 or 0 to Exit :");
		scanf("%d",&a);
		
		
		
		if(a==1){
			for(  i = 0; i < 2; i++) {
        		printf("\tEnter name is [%d]: ",i+1);
        		scanf("%s",&name[i]);
    		}
		}
		else if(a==2){
				for( i = 0; i < 2; i++){
        			printf("\tno [%d]= name is : %s \n",i+1,&name[i]);
					printf("\tEnter Score learn : ");
					scanf("%d",&learn[i]);		
					printf("\tEnter Score midtrarm : ");
					scanf("%d",&midtarm[i]);	
					printf("\tEnter Score final : ");
					scanf("%d",&final[i]);	
   			}
		}
		else if(a==3){
			for( i = 0; i< 2 ; i++){
   			score[i] = learn[i] + midtarm[i] + final[i];
   			if(score[i] >= 80){
   				printf("\t no [%d]  name %s = Score is %d  you grade A \n",i+1,&name[i],score[i]);
			   }
			else if(score[i]){
				printf("\t no [%d]  name %s = Score is %d  you grade B \n",i+1,&name[i],score[i]);
			}
			else if(score[i]){
				printf("\t no [%d]  name %s = Score is %d  you grade C \n",i+1,&name[i],score[i]);
			}
			else if(score[i]){
				printf("\t no [%d]  name %s = Score is %d  you grade D \n",i+1,&name[i],score[i]);
			}
			else if(score[i]){
				printf("\t no [%d]  name %s = Score is %d you grade F \n",i+1,&name[i]),score[i];
			}
			}
		}
		
		else if(a==0){
			break; 
			
			
		}
		
	getch();
	}
}


