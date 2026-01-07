/*
#include <iostream>

#include <deque>

int main()
{
    typedef int SOUFIANE;

    SOUFIANE a = 5;

    std::cout << a << "\nsize: " <<sizeof(a) << "\n";

    std::deque<int>::iterator
}

*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data(5);

    std::cout << sizeof(data) << "\n";
    std::cout << data.size() << "\n";
    
    std::cout << "---------\n";
    std::cout << data[4] << "\n";


}

