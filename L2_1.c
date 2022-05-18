#include <stdio.h>

int main(){
	
	int n, m, i, par;


	scanf("%d %d", &n, &m);

    if (n>m){
        //printf("N nao pode ser menor que m");
        scanf("%d %d", &n, &m);
    }
    
    i=n;
    printf("RESP:");
	while (i<m){
	    par = i%2;
	    if (par ==0 && i != n){
	    printf("%d ", i);}
	    
	    i++;
	}
	
	return 0;
}
