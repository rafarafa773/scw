#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(int argc, char* argv[]) {
	if(!argv[1]) return 1;
	FILE* f = fopen(argv[1], "w");
	size_t a, b;
	printf("(please dont underflow me) number of words for line? ");
	scanf("%1023zu", &a);
	printf("number of lines? ");
	scanf("%zu", &b);
	char* buffer2 = (char*)malloc(sizeof(char)*100000);
	buffer2[0] = '\0';
	printf("what do u wanna put? max 1024 chars ok: ");
	scanf(" %1023[^\n]", buffer2);
	const size_t number_of_if = a;
	const size_t number_of_lines = b;
	char* buffer = (char*)malloc(sizeof(char)*100000);
	buffer[0] = '\0';
	for(int i = 0; i < number_of_if; ++i) {
		strcat(buffer, buffer2);
		strcat(buffer, " ");
		
	}
	strcat(buffer, "\n");
	for(int i = 0; i < number_of_lines; ++i) {
		fprintf(f, "%s", buffer);
	}
	free(buffer);
	free(buffer2);
	fclose(f);
}
