#include <vector>
#include <string>

using namespace std;

// https://qiita.com/iseki-masaya/items/70b4ee6e0877d12dafa8

vector<string> split_native(const string &s, char delim) {
  vector<string> elems;
  string item;
  for(char ch: s) {
    if (ch == delim) {
      if (!item.empty())
        elems.push_back(item);
      item.clear();
    }
    else {
      item += ch;
    }
  }
  if (!item.empty())
    elems.push_back(item);
  return elems;
}