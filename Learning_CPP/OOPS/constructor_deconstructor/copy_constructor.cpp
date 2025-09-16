#include <iostream>
#include <string>
#include <cstring>

class String
{
private:
    char *m_Buffer;
    unsigned int m_Size;

public:
    String(const char *string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size);
    }

    // String(const String& other) = delete // does not allow us to copy now
    String(const String& other) // default copy-contructor
        : m_Size(other.m_Size)
    {
        std::cout<<"Copied string"<<std::endl;
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }


    ~String()
    {
        delete[] m_Buffer;
    }

    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);

};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}

void PrintString(const String& string)
{
    std::cout<<string<<std::endl;
}

int main()
{
    String string = "Ayush";
    String second = string;

    second[2] = 'a';

    PrintString(string);
    PrintString(second);
    // std::cout<< string << std::endl;
    // std::cout<< second << std::endl;
}




// #include <iostream>
// #include <string>

// struct vector2
// {
//     float x, y;
// };

// int main()
// {
//     int a = 2;
//     int b = a;
//     b = 3;

//     vector2 v = {2, 3};
//     vector2 w = v;
//     w.x = 5;

//     vector2* vv = new vector2();
//     vector2* ww = vv;
//     ww->x = 2;
// }


