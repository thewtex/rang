#include "rang.hpp"
#include <chrono>
#include <thread>

using seconds = std::chrono::duration<int, std::ratio<1>>;
using std::cout;
using std::endl;
using std::this_thread::sleep_for;
using std::wcout;

int main()
{
#if defined(_UNICODE) || defined(UNICODE)
    wcout << rang::cursor::setVisible(false);
    wcout << "Hidden for wcout!" << endl;
    sleep_for(seconds(2));
    wcout << rang::cursor::setVisible(true) << endl;
    wcout << "Shown for wcout!" << endl;
#else
    cout << rang::cursor::setVisible(false);
    cout << "Hidden for cout!" << endl;
    sleep_for(seconds(2));
    cout << rang::cursor::setVisible(true) << endl;
    cout << "Shown for cout!" << endl;
#endif
}
