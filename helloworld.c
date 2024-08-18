#include <stdio.h>
void fortune_cookie(char msg[]){
	printf("the message is :%s\n",msg);
	printf("the length is %li bytes\n",sizeof(msg));
	printf("the locate is %p\n",msg);
}

void choice(){
	int contestants[]={1,2,3};
	int *choice =contestants;
	contestants[0]=2;
	contestants[1]=contestants[2];
	contestants[2]=*choice;

	printf("i choice %i number\n",contestants[0]);
	printf("i choice %i number\n",*contestants);
	printf("i choice %i number\n",contestants[1]);
	printf("i choice %i number\n",*(contestants+1));
	printf("i choice %p number\n",contestants);
	printf("i choice %p number\n",(contestants+1));
	printf("i choice %i number\n",2[contestants]);
}
int main(){
	choice();
	char quate[]="cook is my foos";
	fortune_cookie(quate);
	printf("the locate one is %p\n",quate);

	char food[5];
	printf("enter favorite food: ");
	fgets(food,sizeof(food),stdin);
	char ex[20];
	puts("please input the name of boyfriend:");
	scanf("%s",ex);
	printf("dear %s,we should %s break off .\n",ex,"today");
	return 0;
}
