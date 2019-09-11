#include<stdio.h>
#include<string.h>

#define MAX_LIMIT 20

int compare(char * first_word, char * second_word);
int questions();

int main() {
	const char DAUGHTER[10] = "Angel";
	const char SON1[10] = "Xan";
	const char SON2[10] = "Isaac";
	char str[MAX_LIMIT];

        printf("Your name please:");
        scanf("%[^\n]%*c", str);


	compare(DAUGHTER, str);	

	printf("str is %s\n", str);
	
}

int compare(char * first_word, char * second_word) {
	int RET = strcmp(first_word,second_word);

	printf("value of RET is %i\n", RET);



	return RET;

}

/* int questions() {
	//char str[MAX_LIMIT];

	printf("Your name please:");
	scanf("%[^\n]%*c", str); 

	return str;
} */
