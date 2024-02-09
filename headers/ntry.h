#include <vector>
#include <string>
#include <direct.h>

using namespace std;

#ifndef _NTRY_
#define _NTRY_

int ntry(vector<string> args, string cwd);

int main(int argc, char* argv[])
{
    vector<string> args;
    string cwd;
    args.reserve(argc);
    for (int i = 0; i < argc; i++) args.push_back(argv[i]);
    cwd = _getcwd(0, 0);
    return ntry(args, cwd);
}

#endif //ndef _NTRY_