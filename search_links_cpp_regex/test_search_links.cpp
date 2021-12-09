#include <iostream>
#include <string>
#include <regex>
// #include <cstring>
#include "search_links.h"
#include "test_search_links.h"
using namespace std;

void test_extract_links(void) {
  printf( "--------Testing---------\n");
  char text[] = "some text http://some.link.com text.";  
  extract_links(text, sizeof(text)); // http://some.link.com
  
  strcpy(text, "href=\"http://www.example1.org\".");
  extract_links(text, sizeof(text)); // http://www.example1.org

  strcpy(text, "see (http://www.example2.org)");
  extract_links(text, sizeof(text)); // http://www.example2.org

};
