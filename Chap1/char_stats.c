#include <stdio.h> 

int main() {
	int c;
	int nc, nl, ns, nt;
	
	nc = nl = ns = nt = 0;
	while((c = getchar()) != EOF) {
		++nc;
		if(c == '\n') {
			++nl;
		}
		else if(c == ' ') {
			++ns;
		}
		else if(c == '\t') {
			++nt;
		}
	}
	printf("Chars: %d \nLines: %d \nSpaces: %d \nTabus %d", nc, nl, ns, nt);
}