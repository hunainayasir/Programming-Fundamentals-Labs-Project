#include <iostream>
#include <stdlib.h> /* srand, rand */
#include<string.h>
using namespace std;
int main() {
	cout << "Hunaina Yasir" << endl;
	cout << "Roll number: 073" << endl;
//integer Arrays sorting
//array declaration
	int arr[10];
	int i,j;
	int temp;
//read n elements
	for(i=0; i<10; i++) {
//cout<<"Enter element at index ["<<i<<"] ";
		arr[i]=rand() % 100;
//cin>>arr[i];
	}
//print input elements
	cout<<"Unsorted Array elements:"<<endl;
	for(i=0; i<10; i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
//sorting - ASCENDING ORDER
	for(i=0; i<10; i++) {
		for(j=i+1; j<10; j++) {
			if(arr[i]>arr[j]) {         //12,50,33
				temp =arr[i];               //50
				arr[i]=arr[j];              //12
				arr[j]=temp;                //50
			}
		}
	}
//print sorted array elements
	cout<<"Sorted (Ascending Order) Array elements:"<<endl;
	for(i=0; i<10; i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
//String Arrays
	string st_name[3] = {"Bilal","Zubair","Ali"};
	string stemp;
//sorting - ASCENDING ORDER
	cout<<"\n\nUnSorted (Ascending Order) Array elements:"<<endl;
	for(i=0; i<3; i++)
		cout<<st_name[i]<<"\t";
	for(i=0; i<3; i++) {
		for(j=i+1; j<3; j++) {
			if(st_name[i]>st_name[j]) {
				stemp =st_name[i];
				st_name[i]=st_name[j];
				st_name[j]=stemp;
			}
		}
	}
	cout<<"\nSorted (Ascending Order) Array elements:"<<endl;
	for(i=0; i<3; i++)
		cout<<st_name[i]<<"\t";
//CHAR ARRAYS
//strcpy( destination, source ); copy from destinition to source
//strcmp (str1, str2 );Compares str1 to str2
//Returns an integral value indicating the relationship between the strings:
//return value   indicates
// <0 it will return less than 0 if first char of str1 is greater than first char of str2
// 0 the contents of both strings are equal
// >0 it will return greater than 0 if first char of value 1 is less than first char of valu 2
	char chst_name [3][20];
	char t[20];         //temp variariable
	cout<<"\n\n";
	for(i=0; i<3; i++) {
		cout<<"Enter Value in char array ";
		cin>>chst_name[i];
	}
	cout<<"\n\n";
	cout<<"UNSorted (Ascending Order) Array elements:"<<endl;
	for(i=0; i<3; i++)
		cout<<chst_name[i]<<"\t";
	cout<<endl;
//sorting algo
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			if(strcmp(chst_name[i], chst_name[j])<0) {  //it will return less than 0 if first char of value 1 is greater than first char of valu 2
				strcpy(t, chst_name[i]);        //strcpy( destination, source )
				strcpy(chst_name[i], chst_name[j]);
				strcpy(chst_name[j], t);
			}
		}
	}
//print sorted array elements in char array
	cout<<"Sorted (Ascending Order) Array elements:"<<endl;
	for(i=0; i<3; i++)
		cout<<chst_name[i]<<"\t";
	cout<<endl;
	return 0;
}
