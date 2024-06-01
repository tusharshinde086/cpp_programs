
  /*                                Q3.        Create a class String which contains a character pointer (Use new and delete operator) 
Write a C++ program to overload following operators 
a. ! To reverse the case of each alphabet from given string. 
b. [ ] To print a character present at specified index

*/


 #include<iostream.h>
#include<conio.h>
#include<string.h>

class String {
private:
    char *str;
public:
    String() {
        str = NULL;
    }

    String(const char *s) {
        int len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    ~String() {
        if(str != NULL)
            delete[] str;
    }

    String(const String &s) {
        int len = strlen(s.str);
        str = new char[len + 1];
        strcpy(str, s.str);
    }

    void operator!() {
        for (int i = 0; str[i] != '\0'; i++) {
            if (isalpha(str[i])) {
                if (isupper(str[i]))
                    str[i] = tolower(str[i]);
                else
                    str[i] = toupper(str[i]);
            }
        }
    }

    char& operator[](int index) {
        return str[index];
    }

    void display() {
        cout << str;
    }
};

int main() {
    clrscr();
    String s("Hello World!");
    !s; // Reversing the case of each alphabet
    s.display(); // Displaying the modified string

    cout << endl;
    cout << "Character at index 6: " << s[6] << endl;

    getch();
    return 0;
}

