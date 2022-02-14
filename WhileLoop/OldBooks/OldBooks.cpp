#include <iostream>
#include <string>

using namespace std;

int main()
{
    string anisBook;
    getline(cin >> ws, anisBook);
    
    
    int checkedBooks = 0;
    bool isFound = false;

    string book;
    getline(cin >> ws, book);

    while (book != "No More Books") {
        
        if (book == anisBook) {
            isFound = true;
            break;
        }
        checkedBooks += 1;
        getline(cin >> ws, book);
    }

    if (isFound == true) {
        cout << "You checked " << checkedBooks << " books and found it." << endl;
    }
    else {
        cout << "The book you search is not here!" << endl;
        cout << "You checked " << checkedBooks << " books." << endl;
    }

    return 0;
}

