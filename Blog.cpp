#include "Blog.h"

#include <iostream>
#include <string.h>
#include <cstring>
#include <cstdio>
#pragma warning(disable:4996)

//class Blog
//{
//public:
//	char name[100];
//	char text[1000];
//	int LineCount;
//
//	Blog(char name[100], int BlogSize);
//	void AddLine(char* text);
//	void SaveInFile();
//	void LodeFromFile();
//	void Print();
//};



Blog::Blog(char aname[100], int BlogSize) {

	strcpy_s(this->name, aname);
	#undef Max_t
	#define Max_t BlogSize
}

void Blog::AddLine(char* ptext) {
	strcpy(p1, ptext);
	p1 = p1 + strlen(ptext);
	strcpy(p1, ". ");
	p1 = p1 + 2;
	
	LineCount++;
}

void Blog::SaveInFile() {
	FILE* f = fopen(name, "w");

	if (!f) {
		//error
	}
	else
	{
		fputs(text, f);
		fclose(f);
	}
}

void Blog::LodeFromFile() {
	char LoadText[1000];
	FILE* f = fopen(name, "r");

	if (!f) {
		//error
	}
	else
	{
		fgets(LoadText,1000, f);
		fclose(f);
	}
}



void Blog::Print() {
	std::cout << text;
}
