typedef struct cardata cartype;
struct cardata{
	char brand[20];
	char model[20];
	char color[20];
	int cost ;
};
#include "stdio.h"
#include "conio.h"
int main(){
	int n ,i ;
	printf("                 \t\tInput number of car : ");scanf("%d",&n);printf("\n");
	cartype car[2] ;
	for(i = 0; i < n; i++){
		printf("                 \t\t\tINSERT CARDATA[%d]\n\n",i+1);
		printf("                 \t\tEnter brand name of car is : ");
		scanf("%s",car[i].brand);
		printf("                 \t\tEnter model name of car is : ");
		scanf("%s",car[i].model);
		printf("                 \t\tEnter color of car is : ");
		scanf("%s",car[i].color);
		printf("                 \t\tEnter cost of car is : ");
		scanf("%d",&car[i].cost);
		printf("\n");
	}
	printf("                  \t\t\t\tCAR DATA ALL \n\n");
	for(i = 0 ; i < n ; i++){
		printf("    |%d|  Brand name :  %s  ",i+1,car[i].brand);
		printf("    Model name   :  %s  ",car[i].model);
		printf("    Color name   :  %s  ",car[i].color);
		printf("    Cost    :  $ %d  \n",car[i].cost);
		printf("\n");
	}
	
	getch();
}
