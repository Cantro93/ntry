#include <vector>
#include <string>
#include <direct.h>

using namespace std;

#ifndef _NTRY_
#define _NTRY_

int ntry(vector<wstring> args, wstring cwd);

int wmain(int argc, wchar_t* argv[])
{
    vector<wstring> args;
    wstring cwd;
    args.reserve(argc);
    for (int i = 0; i < argc; i++) args.push_back(argv[i]);
    cwd = _wgetcwd(0, 0);
    return ntry(args, cwd);
}

#endif //ndef _NTRY_

