#include<stdio.h>
#include<string.h>
main(){
	
	int i,len;
	char a[100];
	int upr=0,lwr=0,num=0,spc=0;
	
	printf("Create Your Password:");
	gets(a);
	
	len=strlen(a);
	for(i=0;i<len;i++){
		
		if(a[i]>=65 && a[i]<=90) upr++;
		if(a[i]>=97 && a[i]<=122) lwr++;
		if(a[i]>='0' && a[i]<='9') num++;
		if(a[i]=='!' || a[i]=='@' || a[i]=='#' || a[i]=='$' || a[i]=='%' || a[i]=='&' || a[i]=='*') spc++;
	}
	
	if(num>0 && upr>0 && spc>0 && lwr>0){
		printf("Password is strong..");
	}
	else{
		printf("Password is Weak...");
	}
}
