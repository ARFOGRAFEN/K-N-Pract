#include <stdio.h> 

int main() {
	int c, spaces;
	
	spaces = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			spaces++;
			if(spaces > 1) {
				spaces--;
				c--;
			}
		}
		putchar(c);
	}
	printf("%d", spaces);
}