#include <iostream>
using namespace std;



enum enAnswer {No=0, Yes };

enAnswer readAnswer()
{
	short int num;
	cin >> num;

	return (enAnswer)num;
}

void saveNumberInArray(int arr[100], int &length, int num)
{
		length++;
	arr[length-1] = num;
}

int readNumber()
{
	int num;

	cout << "pleases enter a number? ";
	cin >> num;

	return num;
}

void fillArrayWithNumber(int arr[100], int &length, int &num)
{
	enAnswer answer;
	do
	{
		saveNumberInArray(arr,length, readNumber());
		cout << "Do you want to add more numbers? [0]:No, [1]:Yes ";

	} while (readAnswer() == enAnswer::Yes);
}

void printArray(int arr[], int length)
{
	cout << "Array Length: " << length<<"\n";
	cout << "Array elements: ";

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";
}


int main()
{
	int arr[100], length=0, num;

	fillArrayWithNumber(arr, length, num);
	printArray(arr, length);

	return 0;
}