#include <stdio.h>
int main() 
{
    char a[200];
    int i = 0;
    printf("Enter a string: ");
    scanf("%s",&a[i]);
    for(i=0;a[i]!='\0';i++){
    	if(a[i]==" "){
    		printf("\n");
		}
		else{
			printf("%s",a[i]);
		}
    	
	}

    return 0;
}

