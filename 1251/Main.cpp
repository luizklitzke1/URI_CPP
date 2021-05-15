#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
     map<char, long, greater<char>> mChars;
     vector <pair<char, long>> vMap;

     string sEntrada;

     bool bLinha = 0;

     while (getline(cin, sEntrada))
     {
         mChars.clear();

         for (size_t idx = 0; idx < sEntrada.size(); ++idx)
         {
             auto pFind = mChars.find(sEntrada[idx]);

             if (pFind == mChars.end())
                 mChars.insert_or_assign(sEntrada[idx], 1);
             else
                 ++pFind->second;
         }

         vMap.clear();
         vMap.reserve(mChars.size());

         for (auto it = mChars.begin(); it != mChars.end(); ++it)
             vMap.push_back(*it);

         if (bLinha)
             cout << endl;

         stable_sort(vMap.begin(), vMap.end(), [] (const pair<char, long>& p1, const pair<char, long>& p2) -> bool
         {
             return (p1.second < p2.second);
         });

         for (auto idx : vMap)
             cout << (long)idx.first << " " << idx.second << endl;
       
         bLinha = 1;
     }

    

    return 0;
}