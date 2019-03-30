#include <sys/types.h>          /* some systems still require this */
#include <sys/stat.h>
#include <stdio.h>              /* for convenience */
#include <stdlib.h>             /* for convenience */
#include <stddef.h>             /* for offsetof */
#include <unistd.h>

#include <string.h>
#include <unistd.h>
#include<sys/wait.h> 



void remplazar(char *str,int p){
   for (int i = 0; i < p; i++)
   {
      /* code */
      if (str[i]=='\n')
      {
         /* code */
         str[i]=0;
      }
   }
}

int main(int argc, char const *argv[])
{
	char linea[100];

   	while(1){
   		printf("$ ");
   		fgets (linea, 100, stdin);
   		remplazar(linea,100);
   		pid_t pid=fork();

   		if(pid==0){
   			execl(linea, "ls",(void *)0);
   			printf("Error de execl\n");

   		}
   		else{
   			wait(NULL);
            
   		}

   	}
	return 0;
}
