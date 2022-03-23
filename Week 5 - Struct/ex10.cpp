#include <iostream>
#include <vector>

using namespace std;

struct book_infor {
    int accession_num;
    string author;
    string title;
    bool isIssue;

    book_infor () {}
    book_infor (int accession, string _author, string _title, bool _isIssue) {
        accession_num = accession;
        author = _author;
        title = _title;
        isIssue = _isIssue;
    }
};

void Display_book_infor (vector<book_infor> &book) {
    system ("cls");
    int index;
    cout << "Enter the index of the book: ";
    cin >> index;

    cout << "The book infor is: " << endl;
    cout << "Accession number: " << book[index].accession_num << endl;
    cout << "Author: " << book[index].author << endl;
    cout << "Title: " << book[index].title << endl;
    cout << "Is issue: " << book[index].isIssue << endl;
}

void Add_new_book (vector <book_infor> &book) {
    system ("cls");

    int accession_num;
    string author;
    string title;
    bool isIssue;

    cout << "Enter the accession number of the book: ";
    cin >> accession_num;
    cout << "Enter the author of the book: ";
    cin >> author;
    cout << "Enter the title of the book: ";
    cin >> title;
    cout << "Enter the is issue of the book: ";
    cin >> isIssue;

    book_infor new_book (accession_num, author, title, isIssue);
    book.push_back(new_book);
}

void Display_book_of_author (vector <book_infor> &book) {
    system ("cls");

    string author;
    cout << "Enter the author of the book: ";
    cin >> author;

    for (int index = 0; index < book.size(); ++index) {
        if (book[index].author == author) {
            cout << "The book infor is: " << endl;
            cout << "Accession number: " << book[index].accession_num << endl;
            cout << "Author: " << book[index].author << endl;
            cout << "Title: " << book[index].title << endl;
            cout << "Is issue: " << book[index].isIssue << endl;
        }
    }
}

void Display_num_book_of_title (vector <book_infor> &book) {
    system ("cls");

    string title;
    cout << "Enter the title of the book: ";
    cin >> title;

    int num_book = 0;
    for (int index = 0; index < book.size(); ++index) {
        if (book[index].title == title) {
            num_book ++;
        }
    }
    cout << "The number of book is: " << num_book << endl;
}

void Display_total_num_book (vector <book_infor> &book) {
    system ("cls");
    cout << "The total number of book is: " << book.size() << endl;
}

void Issue_book (vector <book_infor> &book) {
    system ("cls");

    int accession_num;
    cout << "Enter the accession number of the book: ";
    cin >> accession_num;

    for (int index = 0; index < book.size(); ++index) {
        if (book[index].accession_num == accession_num) {
            book[index].isIssue = true;
        }
    }
}

int main () {
    int choice;
    vector<book_infor> books;
    books.push_back(book_infor(1, "NguyenVanA", "C++", false));
    do {
        cout << "Menu" << endl;
        cout << "1. Display book infor" << endl;
        cout << "2. Add new book" << endl;
        cout << "3. Display all book of a particular author" << endl;
        cout << "4. Display the number of books of a particular title" << endl;
        cout << "5. Display total number of books" << endl;
        cout << "6. Issue a book" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: Display_book_infor(books); break;
            case 2: Add_new_book(books); break;
            case 3: Display_book_of_author(books); break;
            case 4: Display_num_book_of_title(books); break;
            case 5: Display_total_num_book(books); break;
            case 6: Issue_book(books); break;
        }

    } while (choice != 0);

    return 0;
}