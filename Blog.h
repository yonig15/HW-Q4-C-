#pragma once

#define Max_t 1000

class Blog
{
public:


	char name[100];
	char text[Max_t];
	
	char* p1 = text;
	int LineCount;
	Blog(char name[100], int BlogSize);
	
	void SaveInFile();
	void LodeFromFile();
	void AddLine(char* ptext);
	void Print();
};

