#include <iostream>
#include <string>
#include <cstring>
#include <regex>
#include "search_links.h"
using namespace std;

string convertToString(char* a, int size){
  string s(a);
  return s;
}

void extract_links(char* text, int size) {  
  const regex pattern(R"(\bhttp[s]*:\/\/([a-z0-9_-]+(\.|\/))+[a-z]{2,}\b)");
  string str_text = convertToString(text, size);
  smatch matched;
  
  regex_search(str_text, matched, pattern);  
  cout << matched[0] << endl;
}

void find_links_in_file(char filename[], int size){
  char paragraph[1000];
  
  FILE *fp;
  fp = fopen(filename, "r");
  // read from file by lines
  while (fgets(paragraph, 1000, fp)) {
    extract_links(paragraph, 1000);   
  }
  fclose(fp);
}
