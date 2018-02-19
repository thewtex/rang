#include "rang.hpp"
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace rang;

int main()
{
    cout << cursor::hide();
    cout << "Hidden!" << endl;
    this_thread::sleep_for(chrono::duration<int, ratio<1>>(2));
    cout << cursor::show() << endl;
    cout << "Shown!" << endl;
}
