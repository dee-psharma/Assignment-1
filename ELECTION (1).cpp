#include <stdio.h>
#include <string.h>

int main() {
    char voter[20];
    int i = 0, l = 0, b = 0;

    while (1) {
    	char voter[100];
        printf("Carefully Enter your Voter name (i.e. Name):  ");
        scanf("%s", &voter);
     	char g;
        printf("GENDER :  ");
        scanf("%s", &g);
int DOB;
 printf("Enter your date of birth :: ");
       scanf("%d", &DOB);
       int temp=2023-DOB;
       if(temp>=18 &&( g=='m'|| g=='f')){
       	 if(g=='m'){
       	printf("Mr %s are eligible to give vote",voter);
	   }else if(g=='f'){
	   	printf("MS %s are  eligible to give vote",voter);
	   }


  printf("\nenter party code :: ");
  printf("\n 1. BJP \n 2.LGP \n 3.RSP\n ");
  
                int party ;
                scanf("%d",&party);
                switch (party) {
                    case 1:
                        b++;
                        break;
                    case 2:
                        i++;
                        break;
                    case 3:
                        l++;
                        break;
                    default:
                        printf("enter invalid party name !!!");
                }
  }else{
  	printf("YOU ARE NOT ELIGIBLE FOR VOTE !!!");
  }
	    printf(">>>> Press '0' to end voting or '1' to continue: \n");
        int x;
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
    }
    printf("BJP= %d\nINC= %d\nLJP= %d\n", b, i, l);

   int max =0;
   if(max<b){
   	max=b;
    if(max<l){
   	max=l;
    if(max<i){
   	max=i;
   }
   }
   }
   printf("party win election by \"%d\" votes",max);

    return 0;
}
