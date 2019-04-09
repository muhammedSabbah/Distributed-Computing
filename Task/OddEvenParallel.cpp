#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <omp.h>

using namespace std;



void swap(int & a, int & b)
{
	int z = a;
	a = b;
	b = z;
}

void OddEven(vector<int> & A,int start, int length)
{
	int status = 0;
	omp_set_num_threads(4);
#pragma omp parallel for ordered
	for (int i = start; i < length; i++)
#pragma omp ordered
	{
		for (int j = start; j < length; j++)
		{
			status = i % 2;
			if (j % 2 == status && j + 1 < length && A[j] > A[j + 1])
			{
				swap(A[j], A[j + 1]);
			}
		}
	}
}

vector<int> readFile(string Path)
{
	string line;
	vector<int> Data;
	ifstream myfile(Path);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			int num = atoi(line.c_str());
			Data.push_back(num);
		}
		myfile.close();
	}
	return Data;
}

void WriteFile(vector<int> Data)
{
	ofstream myfile("Data.txt");
	if (myfile.is_open())
	{
		for (int i = 1; i <= Data[0]; i++)
		{
			myfile << Data[i];
			myfile << "\n";
		}
		myfile.close();
	}
	else
		cout << "Unable to open file";
}

int main()
{
	vector<int> Data;

	Data = 
		readFile("E:/FCIS/Year 4/sem 2/Distributed Computing/labs/task 1/10_test.txt");

	OddEven(Data, 1, Data[0] + 1);

	WriteFile(Data);
	return 0;
}

