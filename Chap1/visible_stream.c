#include <stdio.h> 


int main() {
	int c;
	
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			printf("[NL]");
		}
		else if(c == '\t') {
			printf("[TAB]");
		}
		putchar(c);
	}
}