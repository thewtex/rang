#include "rang.hpp"
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace rang;

int main()
{
    cout << cursor::hide();
    cout << "Hidden for cout!" << endl;
    this_thread::sleep_for(chrono::duration<int, ratio<1>>(2));
    cout << cursor::show() << endl;
    cout << "Shown for cout!" << endl;

    wcout << cursor::hide();
    wcout << "Hidden for wcout!" << endl;
    this_thread::sleep_for(chrono::duration<int, ratio<1>>(2));
    wcout << cursor::show() << endl;
    wcout << "Shown for wcout!" << endl;
}
