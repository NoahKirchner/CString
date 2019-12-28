#include <iostream>
#include "CString.cpp"


/*
This is just a test/proof that this works file. I'd urge you to
look at the header file if you'd like some more information.
*/


String test("Hello, world!");


int main()
{
    test.print();
    std::cout << "\n";
    String test("Hello again, world!");
    test.print();
    std::cout << "\n";
    std:: cout << test.count();
    std::cout << "\n";
    std:: cout << test.element(3);
    std::cout << "\n";
    std::cout << test.compare_length("Hello again, world!");
    std::cout << "\n";
    std::cout << test.compare_length("Hello again!");
    std::cout << "\n";
    std:: cout <<test.compare_length("Hello again there, world!");
    std::cout << "\n";
    std::cout << test.compare_content("Hello again, world!");
    std::cout << "\n";
    std::cout << test.compare_content("Hello again, world?");
    std::cout << "\n";
    test.append("  Goodbye now!");
    test.print();
    std::cout << "\n";









    return 0;
}

