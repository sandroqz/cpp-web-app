#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void content_type(string content_type)
{
    cout << "Content-type: " << content_type << "\r\n\r\n";
}

void title(string title)
{
    cout << "<title>" << title << "</title>\n";
}

void h1(string text)
{
    cout << "<h1>" << text << "</h1>\n";
}

void p(string text)
{
    cout << "<p>" << text << "</p>\n";
}

int main()
{
    content_type("text/html");

    cout << "<!doctype html>\n";
    cout << "<html lang=\"en\">\n";
    cout << "<head>\n";
    title("Hello, World!");
    cout << "</head>\n";
    cout << "<body>\n";
    h1("Hello, World!");
    p("My first web-app in C++!");
    cout << "</body>\n";
    cout << "</html>";

    return 0;
}
