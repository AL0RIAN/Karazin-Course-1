#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	char name[19];
	int count;
} Struct;

int main()
{
	Struct test;
	FILE* fp;

	//test = (Struct*) malloc(1 * sizeof(Struct));


	fp = fopen("test.dat", "wb");
	if (fp != NULL)
	{
		strcpy(test.name, "This is an APPLLE.");
		test.count = 1;

		printf("Size of NAME: %d\n", sizeof(test.name));
		printf("Size of COUNT: %d\n", sizeof(test.count));
		printf("SIZE OF STRUCT: %d\n", sizeof(Struct));

		fwrite(&test, sizeof(Struct), 1, fp);
		
		//fwrite("This is an apple...", sizeof(char), strlen("This is an apple..."), fp);
		fseek(fp, 20, SEEK_SET);
		
		int num = 2;

		fwrite(&num, sizeof(int), 1, fp);
		//fputs(3, fp);

		fclose(fp);
	}

	fp = fopen("test.dat", "rb");
	if (fp != NULL)
	{
		Struct temp;
		fread(&temp, sizeof(Struct), 1, fp);
		printf("\n%s\n", temp.name);
		printf("%d\n", temp.count);
	}

	return 0;
}

//https://stackoverflow.com/questions/34473625/modify-some-bytes-in-a-binary-file-in-c