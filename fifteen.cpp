#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    string publisher;
    string genre;
};

void printAllBooks(Book f[]) {
    for (int i = 0; i < 10; i++) {
        cout << "Title: " << f[i].title << endl;
        cout << "Author: " << f[i].author << endl;
        cout << "Publisher: " << f[i].publisher << endl;
        cout << "Genre: " << f[i].genre << endl;
        cout << endl;
    }
}

void findBookByName(string f, Book b[]) {
    for (int i = 0; i < 10; i++) {
        if (b[i].title == f) {
            cout << "Title: " << b[i].title << endl;
            cout << "Author: " << b[i].author << endl;
            cout << "Publisher: " << b[i].publisher << endl;
            cout << "Genre: " << b[i].genre << endl;
            cout << endl;
        }
    }
}

void findBookByAuthor(string f, Book b[]) {
    for (int i = 0; i < 10; i++) {
        if (b[i].author == f) {
            cout << "Title: " << b[i].title << endl;
            cout << "Author: " << b[i].author << endl;
            cout << "Publisher: " << b[i].publisher << endl;
            cout << "Genre: " << b[i].genre << endl;
            cout << endl;
        }
    }
}

int main() {
    Book books[10] = {
        {"The Hobbit", "J.R.R. Tolkien", "George Allen & Unwin", "Fantasy"},
        {"Harry Potter and the Philosopher's Stone", "J.K. Rowling", "Bloomsbury", "Fantasy"},
        {"One Hundred Years of Solitude", "Gabriel Garcia Marquez", "Sudamericana", "Magic Realism"},
        {"Alice's Adventures in Wonderland", "Lewis Carroll", "Macmillan", "Fantasy"},
        {"The Catcher in the Rye", "J.D. Salinger", "Little, Brown and Company", "Novel"},
        {"Sherlock Holmes: The Complete Novels and Stories", "Arthur Conan Doyle", "George Newnes", "Detective"},
        {"To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.", "Southern Gothic"},
        {"Pride and Prejudice", "Jane Austen", "T. Egerton", "Romance"},
        {"The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons", "Tragedy"},
        {"The Adventures of Tom Sawyer", "Mark Twain", "American Publishing Company", "Adventure"}
    };
    string f;
    /*cout << "Which book u wanna replace?";
    getline(cin, f);
    for (int i = 0; i < 10; i++) {
        if (books[i].title == f) {
            getline(cin, books[i].title);
            getline(cin, books[i].author);
            getline(cin, books[i].publisher);
            getline(cin, books[i].genre);
        }
    }*/

    getline(cin, f);
    //findBookByName(f, books);
    findBookByAuthor(f, books);
    //printAllBooks(books);
}
