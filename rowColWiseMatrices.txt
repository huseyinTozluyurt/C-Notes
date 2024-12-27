#include <iostream>
#include<ctime>
#define row 3
#define col 5
#define MAX 10000
int mat [MAX][MAX] = { 0 };
using namespace std;
void printMatrix(int matrice[row][col])
{
	cout << "[";
	for (int c = 0; c < row; c++)
	{
		cout << "[";
		for (int k = 0; k < col; k++)
		{
			if (k == col - 1)
				cout << matrice[c][k];
			else {
				cout << matrice[c][k] << ", ";
			}
		}
		if (c == row - 1)
		{
			cout << "]";
			break;
		}
		cout << "],";
	}
	cout << "]"<<endl;
}
void rowWise() {
	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++)
			mat[i][j]++;
	
}
void colWise() {
	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++)
			mat[j][i];
}
void accessTime() {
	//rowWiseMeasuring
	clock_t t = clock();
	rowWise();
	t = clock() - t;
	cout << "Row wise access time: ";
	float rowTime = (t / (float)CLOCKS_PER_SEC);
	cout << rowTime<<"s\n";
	//colWiseMeasuring
	t = clock();
	colWise();
	t = clock() - t;
	float colTime = (t / (float)CLOCKS_PER_SEC);
	cout << "Col wise access time: ";
	cout << colTime<<"s\n";
	cout << "Row time is " << (rowTime / colTime) << " times faster than colTime. \n";
}
int main() {
	//rowWise
	int matrice[row][col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			matrice[i][j] = j + 1 + (col * i);
	}
	printMatrix(matrice);
	int num = 1;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
			matrice[j][i] *= 2;
	}
	printMatrix(matrice);
	//colWise
	int secMatrix[row][col];
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			num *= 2;
			secMatrix[j][i] = num;
		}

	}
	printMatrix(secMatrix);
	accessTime();
}
