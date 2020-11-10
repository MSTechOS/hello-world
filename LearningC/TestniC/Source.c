/*
Author: MSTechOS
Purpose:
Date:
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	char str[100];
	char *pstr = str;
	char *ptr = NULL;
	int leng = 0;
	char result = 0;
	char str1[100];
	char str2[100];
	char str3[100];
	char str4[100];

	int length(char str[]);
	int con(char str1[], char str2[]);
	void same(char str3[], char str4[]);
	
	printf("Enter array\n");
	scanf(" %s", &str);
	leng = length(str);
	printf("%d\n", leng); 


	printf("Enter string 1\n");
	scanf(" %s", &str1);
	printf("Enter string 2\n");
	scanf(" %s", &str2);
	result = con(str1, str2);
	printf("%d", result);


	printf("Enter string 3\n");
	scanf(" %s", &str3);
	printf("Enter string 4\n");
	scanf(" %s", &str4);
	same(str3, str4);
	

	return 0;
}

int length(char str[]) {

	int ret = 0;
	while (str[ret] != '\0') {
		
		ret++;
	}
	return ret;
}

int con(char str1[], char str2[]) {
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int ret = 0;
	while (str1[i] != '\0') {
		//printf("\n1 %u", str1[i]);
		i++;
		
	}
	//str1[ret] = str2;
	//printf(" %s", str2);
	while (str2[j] != '\0') {
		//printf("\n2 %s", &str2[j]);
		//str1[ret] = str2[j];
		str1[i + k] = str2[j];
		//printf("\n%u", str1[i + k]);
		++k;
		++j;
	}
	ret = i + j;
	/*while (ret >= 0) {
		printf("%s", str1[ret]);
		++m;
		--ret;
	}*/
	str1[i + k] = '\0';
	printf("%s", str1);
	return 0;
}

void same(char str3[], char str4[]) {
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	while (str3[i] != '\0') {
		i++;
	}

	while (str4[j] != '\0') {
		j++;
	}

	if (i != j) {
		printf("Not the same!");
	}
	else {
		
		while (str3[l] != '\0') {
			

			if (str3[l] == str4[l]) {
				k++;
		
			}
		
			l++;
		}

		if (k == j)
			printf("Same!");
		else
			printf("Not the same!");
	}


	return 0;
}