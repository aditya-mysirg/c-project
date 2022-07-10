#include <stdio.h>
int main() {
	int hou, h, m ;
	printf("Input Min: ");
	scanf("%d", &hou);
	
	h = (hou/3600); 
	
	m = (hou-(3600*h))/60;
	
	
	
	printf(" Hour%d:Minute%d\n", h,m );
	
	return 0;
}