#include <string>
#include <vector>
using namespace std;

std::vector<std::string> solution(const std::string &s)
{
  vector<string> idk;
  int size = s.size();
  if(size % 2 == 0){
  for(int i = 0; i < size; i+=2){
    string tmp, tmp2;
    tmp.push_back(s[i]);
    tmp2.push_back(s[i + 1]);
    idk.push_back(tmp + tmp2);
    }
  }
  else if(size % 2 !=  0){
    for(int i = 0; i < size; i+=2){
      if(i == size - 1){
        string tmp, tmp2;
    tmp.push_back(s[i]);
    tmp2.push_back('_');
        idk.push_back(tmp + tmp2);
      }
      else{
    string tmp, tmp2;
    tmp.push_back(s[i]);
    tmp2.push_back(s[i + 1]);
        idk.push_back(tmp + tmp2);
      }
      
    }
  }
  return idk;
}
