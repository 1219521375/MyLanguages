#include <iostream>
#include <algorithm>
using namespace std;
/**
 * Alt+Shift+F可以格式化代码
 * Ctrl+Shift+B单纯编译
 * F5为编译加调试
*/
int main()
{
    int a, b;
    while(cin>>a>>b){
        cout << min(a, b) << "\n";
    }
    system("pause");
    return 0;
}