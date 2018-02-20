#include "rang.hpp"
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
#if defined(_UNICODE) || defined(UNICODE)
    wcout << rang::cursor::hide();
    wcout << "Hidden for wcout!" << endl;
    this_thread::sleep_for(chrono::duration<int, ratio<1>>(2));
    wcout << rang::cursor::show() << endl;
    wcout << "Shown for wcout!" << endl;
#else
    cout << rang::cursor::hide();
    cout << "Hidden for cout!" << endl;
    this_thread::sleep_for(chrono::duration<int, ratio<1>>(2));
    cout << rang::cursor::show() << endl;
    cout << "Shown for cout!" << endl;
#endif
}
