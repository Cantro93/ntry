# ntry - better C++ entrypoints

This library defines new entrypoints designed for usage in C++ programs:

## `ntry`
```cpp
int ntry(vector<string> args, string cwd);
```
It is intended to be used instead of standard `main`.

## `_wntry`
```cpp
int _wntry(vector<wstring> args, wstring cwd);
```
Unicode (`wchar_t`) variant of `ntry`

## `msntry`
```cpp
int msntry(vector<string> args, string cwd, vector<string> envs);
```
Provides environmental variables (`char* envp[]`). Use on Windows.

## `_wmsntry`
```cpp
int _wmsntry(vector<wstring> args, wstring cwd, vector<wstring> envs);
```
Unicode (`wchar_t`) variant of `msntry`.

## Example
```cpp
#include <iostream>
#include "ntry" //name of header is same as entrypoint's name, e. g. _wntry declares _wntry entrypoint

using namespace std;

int ntry(vector<string> args, string cwd)
{
    cout << "Hello world from NTRY entrypoint!" << endl;
    cout << "Command line: \n";
    for (string& arg : args)
        cout << arg << ' ';
    cout << endl << "CWD: \"" << cwd << '"' << endl;
    return 0;
}
```