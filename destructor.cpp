#include <iostream>
using namespace std;

class FileWrapper
{
    FILE *file;

public:
    FileWrapper(const char *fname)
    {
        file = fopen(fname, "w");
        cout << "File opened\n";
    }
    ~FileWrapper()
    {
        if (file)
        {
            fclose(file);
            cout << "File closed\n";
        }
    }
    void write(const char *s)
    {
        if (file)
            fputs(s, file);
    }
};
int main()
{
    {
        FileWrapper w("out.txt"); // constructor opens
        w.write("Hello, My name is Digar Singh\n");
    } // destructor auto-closes when block ends
    return 0;
}