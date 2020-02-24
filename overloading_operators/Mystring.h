#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    private:

    char *str;  // pointer to a char[] that holds a c-style string

    public:
    // prototypes
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source); //copy constructor
    Mystring(Mystring &&source);      // move constructor prototype
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);   // copy assignment: &operator<operator>=(const <obj> &var)
    Mystring &operator=(Mystring &&rhs);

    Mystring operator-() const;                 // make lowercase
    Mystring operator+(const Mystring &rhs) const;    // concatenate
    bool operator==(const Mystring &rhs) const;

    void display() const;

    int get_length() const;
    const char *get_str() const;
};

#endif