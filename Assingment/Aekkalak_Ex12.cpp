#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

struct employee{
	char id[10];
	char name[20];
	char sername[20];
	int age;
	int salary;
	char department[30];
}employee;

FILE * fp , * fp2 ,* fp3 , * fp4 ; 
char filename[50];

void openfile(void);
void createfile(void);
void displayfile(void);
void updatefile(void);
void deletefile(void);
void searchfile(void);

int main(){
	int n;
	while (1){
		printf("[ 1 ]  create employee file\n");
        printf("[ 2 ]  display employee file\n");
        printf("[ 3 ]  update employee file\n");
        printf("[ 4 ]  delete employee\n");
        printf("[ 5 ]  search employee\n");
        printf("[ 6 ]  stop program\n");;
        printf("Plese select : ");
        scanf("%d",&n);
        if (n == 1){
        	createfile();
		}
        if (n == 2){
        	openfile();
            displayfile();
		}
        if (n == 3){
        	openfile();
            updatefile();	
		}
        if (n == 4){
        	openfile();
            deletefile();	
		}
        if (n == 5){
        	openfile();
            searchfile();
		}
        if (n == 6 or n > 6 or n < 1){
        	break;	
		}
	}
}

void openfile(void){
	printf("Open filename : ");
	scanf("%s",filename);
	printf("\n");
}

void createfile(void){
	int a , i = 1;
	char filenamein[50];
	printf("Create filename : ");
	scanf("%s",filenamein);
	if ((fp = fopen(filenamein,"w")) == NULL){
		printf("error in wirte file \n");
		exit(1);
	}
	printf("Number of Employee is : ");
	scanf("%d",&a);
	printf("Input information of employee \n");
	while (i <= a){
		printf("Employee ID : ");
		scanf("%s",employee.id);
		printf("Employee Name : ");
		scanf("%s",employee.name);
		printf("Employee Sername : ");
		scanf("%s",employee.sername);
		printf("Employee Age : ");
		scanf("%d",&employee.age);
		printf("Employee Salary : ");
		scanf("%d",&employee.salary);
		printf("Employee Department : ");
		scanf("%s",employee.department);	
		printf("\n");
		fwrite(&employee , sizeof(employee), 1 , fp);
		i++;
	}
	printf("Create complete\n");
	fclose(fp);
}

void displayfile(void){
	if ((fp = fopen(filename,"r")) == NULL){
		printf("error in wirte file \n");
		exit(1);
	}
	while(fread(&employee, sizeof(employee), 1 , fp) == 1){
		printf("information of employee \n");
		printf("Employee ID : %s \n",employee.id);
		printf("Employee FirstName : %s \n",employee.name);
		printf("Employee Sername : %s \n",employee.sername);
		printf("Employee Age : %d \n",employee.age);
		printf("Employee Salary : %d \n",employee.salary);	
		printf("Employee Department : %s \n",employee.department);
		printf("\n");
	}
	printf("Reading complete\n");
	fclose(fp);
}

void updatefile(void){
	int a ;
	int id;
	printf("[ 1 ] Edit employee in record \n");
	printf("[ 2 ] Inseart employee \n");
	printf("Select : ");
	scanf("%d",&a);
	if ( a == 1 ){
		printf("[ 1 ] Edit employee in record \n");
		printf("Update at ID :");
		scanf("%d",&id);
		if ((fp = fopen(filename,"r")) == NULL){
			printf("error in read file \n");
			exit(1);
		}
		fp2 = fopen("D:\\temp.dat","w");
		while(fread(&employee, sizeof(employee), 1 , fp) == 1){
			if (id == atoi(employee.id)){
				printf("Employee ID : ");
				scanf("%s",employee.id);
				printf("Employee Name : ");
				scanf("%s",employee.name);
				printf("Employee Sername : ");
				scanf("%s",employee.sername);
				printf("Employee Age : ");
				scanf("%d",&employee.age);
				printf("Employee Salary : ");
				scanf("%d",&employee.salary);
				printf("Employee Department : ");
				scanf("%s",employee.department);	
				printf("\n");
			}
			fwrite(&employee , sizeof(employee), 1 , fp2);
		}
		fclose(fp);
		fclose(fp2);
		fp3 = fopen("D:\\temp.dat","r");
		fp4 = fopen(filename , "w");
		while(fread(&employee, sizeof(employee), 1 , fp) == 1){
			fwrite(&employee , sizeof(employee), 1 , fp4);
		}
		printf("Update complete\n");
		fclose(fp3);
		fclose(fp4);
	}
	if ( a == 2 ){
		int i = 1 ,n;
		printf("[ 2 ] Inseart employee \n");
		printf("Number of Employee is : ");
		scanf("%d",&n);
		if ((fp = fopen(filename,"a")) == NULL){
			printf("error in read file \n");
			exit(1);
		}
		printf("Input information of employee \n");
		while (i <= n){
			printf("Employee ID : ");
			scanf("%s",employee.id);
			printf("Employee Name : ");
			scanf("%s",employee.name);
			printf("Employee Sername : ");
			scanf("%s",employee.sername);
			printf("Employee Age : ");
			scanf("%d",&employee.age);
			printf("Employee Salary : ");
			scanf("%d",&employee.salary);
			printf("Employee Department : ");
			scanf("%s",employee.department);	
			printf("\n");
			fwrite(&employee , sizeof(employee), 1 , fp);
			i++;
		}
		printf("Insert complete\n");
		fclose(fp);
	}
}

void deletefile(void){
	int d_id ; 
	printf("Delete at ID : ") ;
	scanf("%d",&d_id);
	if ((fp = fopen(filename,"r")) == NULL){
		printf("error in wirte file \n");
		exit(1);
	}
	fp2 = fopen("D:\\temp.dat","w");
	while(fread(&employee , sizeof(employee), 1 , fp) == 1){
		if(d_id != atoi(employee.id)){
			fwrite(&employee , sizeof(employee), 1 , fp2);
		}
	}
	fclose(fp);
	fclose(fp2);
	fp3 = fopen("D:\\temp.dat","r");
	fp4 = fopen(filename , "w");
	while(fread(&employee , sizeof(employee) , 1 , fp3) == 1){
		fwrite(&employee , sizeof(employee), 1 , fp4);
	} 
	printf("Delete complete \n");
	fclose(fp3);
	fclose(fp4);
}

void searchfile(void){
	int s_id ; 
	printf("Search at ID : ");
	scanf("%d",&s_id);
	if ((fp = fopen(filename,"r")) == NULL){
		printf("error in wirte file \n");
		exit(1);
	}
	while(fread(&employee , sizeof(employee), 1 , fp) == 1){
		if(s_id == atoi(employee.id)){
			printf("information of employee \n");
			printf("Employee ID : %s \n",employee.id);
			printf("Employee FirstName : %s \n",employee.name);
			printf("Employee Sername : %s \n",employee.sername);
			printf("Employee Age : %d \n",employee.age);
			printf("Employee Salary : %d \n",employee.salary);	
			printf("Employee Department : %s \n",employee.department);
			printf("\n");
		}
	}
	printf("Search complete\n");
	fclose(fp);
}






