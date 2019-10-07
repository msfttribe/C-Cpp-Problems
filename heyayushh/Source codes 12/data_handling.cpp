#include<iostream>

using namespace std;

int main()
{
	char data[100];
	
	//open a file in write mode
	ofstream outfile;
	outfile.open("afile.pdf");
	cout<<"Writing to the file"<<endl;
	cout<<"Enter your name";
	cin.getine(data,100);
	
	//write input data into the file
	outfile<<data<<endl;
	cout<<"Enter your age";
	cin>>data;
	cin.ignore();
	
	//write input data into the file
	outfile<<data<<endl;
	
	//close the opened file
	outfile.close();
	
	//close the opened file
	outfile.close();
	
	//open file in read mode
	ifstream infile;
	infile.open("afile.pdf");
	cout<<"reading from the file"<<endl;
	infile>>data;
	
	//read the data from the opened file
	infile.close();
	return 0;
	
}
