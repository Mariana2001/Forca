#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
char palavra[25],letra[25],lacuna[25];
int vida=3,x,i;

printf("\n\nDigite a palavra secreta:\n\n");
scanf("%s",&palavra);
system("cls");

for(i=0;i<palavra;i++)
{
while(vida>0)
{
x=0;

printf("\n %s \n",lacuna);
printf("\n digite uma letra: ");
scanf("%s",&letra);
for(i=0;i<strlen(palavra);i++)
{
if(letra[0]==palavra[i])
{
lacuna[i]=palavra[i];
x++;
}
}
if(x==0) 
{
vida=vida-1;
if(vida==0)
 {
printf("\n VOCE FOI ENFORCADO!");
printf("\n A PALAVRA ERA: %s",palavra);
break;
}
if(vida==0) {
printf("\n VOCE FOI ENFORCADO!");
printf("\n A PALAVRA ERA: %s",palavra);
break;
}
else
printf("\n VOCE ERROU! RESTAM %d VIDA(S)",vida); 
}

else 
{
printf("\n VOCE ACERTOU UMA LETRA!");
} } 
}
return 0; 
}
