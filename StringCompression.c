#include<string.h>
#include<stdio.h>
int main(){
	char s[121];
	int i,j,count;
	int k=0;
	printf("Enter a string\n");
	gets(s);
	for(i=0;i<strlen(s);i=i+k){
 		count=1;
 		k=0;
		for(j=i+1;;j++){
  			if(s[i]==s[j]){
   				count++;
   				k++;
		}
  			else{
  				k++;
   				break;
   			}
   		}
 		printf("%c%d",s[i],count);
    }
 }
