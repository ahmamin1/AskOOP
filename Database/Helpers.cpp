#include <bits/stdc++.h>
using namespace std;

class DB
{
    public:


    static vector<string> readFileLines(const string path)
    {
        vector<string> lines;

        fstream file(path.c_str());
        if (file.fail())
        {
            cout << "\n\nERROR:::: Can't open the file\n\n";
            return lines;
        }

        string line;
        while (getline(file, line))
        {
            // to ignore white space lines
            if (line.size() == 0)
                continue;

            lines.push_back(line);
        }

        file.close();
        return lines;
    }

    static void writeFileLines(string path, vector<string> &lines, bool append = true)
    {
        auto mode = append ? ios::in | ios::out | ios::app : ios::in | ios::out | ios::trunc;


        fstream file(path.c_str(),mode);
        if (file.fail())
        {
            cout << "\n\nERROR:::: Can't open the file\n\n";
            return;
        }
        
        for (auto &line : lines)
            file << line << '\n';
        
        file.close();
    }
};
