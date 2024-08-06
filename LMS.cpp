#include <iostream>
#include <cstring>
using namespace std;

const int maxBooks = 100;

struct Books{
	char bookTitle[100];
	char bookAuthor[100];
	int publicationYear;
};
void AddBook(Books library[], int& bookCount);
void DisplayBooks(const Books library[], int bookCount);

int main(){
	Books library[maxBooks];
	int bookCount = 0;
	int select;
	
	do{
		cout<<"------------LIBRARY MANAGEMENT SYSTEM------------\n"<<endl;
		cout<<"1. To add a book"<<endl;
		cout<<"2. To display all the books"<<endl;
		cout<<"3. To exit"<<endl;
		cout<<"Enter your choice: "<<endl;
		cin>>select;
		cin.ignore();
		
		switch(select){
			case 1:
				AddBook(library, bookCount);
				break;
			case 2:
				DisplayBooks(library, bookCount);
				break;
			case 3:
				cout<<"Exit!"<<endl;
				break;
			default:
				cout<<"Invalid choice!"<<endl;
		}
	}
	while(select!=3);
}

void AddBook(Books library[], int& bookCount){
	if(bookCount < maxBooks){
		Books newBook;
		cout<<"Enter book title: "<<endl;
		cin.getline(newBook.bookTitle, sizeof(newBook.bookTitle));
		cout<<"Enter author name: "<<endl;
		cin.getline(newBook.bookAuthor, sizeof(newBook.bookAuthor));
		cout<<"Enter year of publication: "<<endl;
		cin>>newBook.publicationYear;
		cin.ignore();
		library[bookCount++] = newBook;
		cout<<"Book added successfully!\n"<<endl;	
	}
	else{
		cout<<"Cannot add this book!"<<endl;
	}
}

void DisplayBooks(const Books library[], int bookCount){
	if(bookCount == 0){
		cout<<"Library is empty!"<<endl;
	}
	else{
		cout<<"LIBRARY CONTENTS"<<endl;
		for(int i=0; i<bookCount; ++i){
			cout<<"Book Title: "<<library[i].bookTitle<<endl;
			cout<<"Book Author: "<<library[i].bookAuthor<<endl;
			cout<<"Book Publication Year: "<<library[i].publicationYear<<endl;
			cout<<"----------------------------------------"<<endl;
		}
	}
}
