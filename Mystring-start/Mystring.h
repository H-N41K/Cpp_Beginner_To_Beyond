#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    private:
        char *str; //Pointer to a char[] that holds a C-style string
    public:
        Mystring();  // No-args constructor
        Mystring(const char *s); // Overloaded constructor
        Mystring(const Mystring &source); // Copy constructor
        ~Mystring(); // Destructor
        void display() const;
        int getLength() const;
        const char *getStr() const;
};

#endif // _MYSTRING_H_