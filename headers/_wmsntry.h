#include <vector>
#include <string>
#include <direct.h>

using namespace std;

#ifndef _NTRY_
#define _NTRY_

int ntry(vector<wstring> args, wstring cwd, vector<wstring> envs);

int wmain(int argc, wchar_t* argv[], wchar_t* envp[])
{
    vector<wstring> args, envs;
    wstring cwd;
    int c = 0;
    args.reserve(argc);
    envs.reserve(1);
    for (int i = 0; i < argc; i++) args.push_back(argv[i]);
    while (envp[c] != nullptr) envs.push_back(envp[c]);
    cwd = _wgetcwd(0, 0);
    return ntry(args, cwd, envs);
}

#endif //ndef _NTRY_

