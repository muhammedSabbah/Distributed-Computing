#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

/*

void swap(int & a, int & b)
{
	int z = a;
	a = b;
	b = z;
}

int pivot(vector<int> & A, int start, int end)
{
	int p = A[start];
	int indx = start;
	for (int j = start + 1; j <= end; j++)
	{
		if (A[j] <= p)
		{
			indx++;
			swap(A[j], A[indx]);
		}
	}
	swap(A[indx], A[start]);
	return indx;
}

void QuickSort(vector<int> & A, int start, int end)
{
	if (start >= end)
		return;
	else
	{
		int p = pivot(A, start, end);
		QuickSort(A, start, p - 1);
		QuickSort(A, p + 1, end);
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
	Data = readFile("E:/FCIS/Year 4/sem 2/Distributed Computing/labs/task 1/10_test.txt");
	QuickSort(Data, 1, Data[0]);
	WriteFile(Data);
}

*/