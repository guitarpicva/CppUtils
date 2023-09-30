#include <iostream>
#include "ez_cpp_utils.h"
#include "maidenhead.h"
using namespace std;

int main()
{
    std::string in("AB,CDE,,F,G,HIJK,LMNOP");
    std::vector<std::string> chunks;
    cout << "input:"<< in.c_str() << endl;
    cout<< "chunks.size():"<<chunks.size() << endl;
    cout << "split string on ',' and keep emptyies: "<<in<<endl;
    chunks = split_keep(in, ',');
    for(auto s: chunks) {
        cout << "\""<< s.c_str() << "\"" << endl;
    }
    chunks.clear();
    cout << "\nsplit string on ',' and discard emptyies: "<<in<<endl;
    chunks = split_discard(in, ',');
    for(auto s: chunks) {
        cout << "\""<< s.c_str() << "\"" << endl;
    }
    chunks.clear();
    cout << "\nsplit string on ',' and keep empties: "<<in<<endl;
    chunks = split(in, ',', true);
    for(auto s: chunks) {
        cout << "\""<< s.c_str() << "\"" << endl;
    }
    chunks.clear();
    cout << "\nsplit string on ',' and discard empties: "<<in<<endl;
    chunks = split(in, ',', false);
    for(auto s: chunks) {
        cout << "\""<< s.c_str() << "\"" << endl;
    }
    chunks.clear();
    cout << "\nsplit string on string \"F,G\" and keep empties: "<<in<<endl;
    chunks = split(in, "F,G", true);
    for(auto s: chunks) {
        cout << "\""<< s.c_str() << "\"" << endl;
    }
    chunks.clear();
    cout << "\nsplit string on string \"F,G\" and discard empties: "<<in<<endl;
    chunks = split(in, "F,G", false);
    for(auto s: chunks) {
        cout << "\""<< s.c_str() << "\"" << endl;
    }
    cout << "===========================================================" << endl;
    cout << "EzCppUtils Test Frame" << endl;
    cout << "---------------------" << endl;
    cout << "Day of Year for 2023-01-31:" << get_doy(2023u, 1u, 31u) << "\n";
    cout << "Day of Year for 2023-02-28:" << get_doy(2023u, 2u, 28u) << "\n";
    cout << "Day of Year for 2023-12-31:" << get_doy(2023u, 12u, 31u) << "\n";
    cout << "Day of Year for 2000-02-29:" << get_doy(2000u, 2u, 29u) << "\n\n";
    cout << "Day of Year for 2000-03-01:" << get_doy(2000u, 3u, 1u) << "\n\n";

    cout << "===========================================================" << endl;
    std::pair<double, double> latlon = mh2ll("FM16dx");
    cout << "Latitude/Longitude for MH FM16dx:"<<latlon.first<<"/"<<latlon.second<<endl;
    latlon = mh2ll("fm16dx");
    cout << "Latitude/Longitude for MH fm16dx:"<<latlon.first<<"/"<<latlon.second<<endl;
    latlon = mh2ll("FM16DX");
    cout << "Latitude/Longitude for MH FM16DX:"<<latlon.first<<"/"<<latlon.second<<endl;
    latlon = mh2ll("fm16DX");
    cout << "Latitude/Longitude for MH fm16DX:"<<latlon.first<<"/"<<latlon.second<<endl;
    return 0;
}
