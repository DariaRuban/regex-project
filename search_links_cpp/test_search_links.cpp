#include <iostream>
// #include <string>
#include <cstring>
#include "search_links.h"
#include "test_search_links.h"
using namespace std;

void test_extract_links(void) {
  printf( "--------Testing--------\n");
  char text[] = "some text http://some.link.com text.";
  char link[27];
  extract_links(text, sizeof(text)); // http://some.likkkgjhnk.coom
  strcpy(text, "href=\"http://www.example.org\".");
  extract_links(text, sizeof(text)); // http://www.example.org

  strcpy(text, "see here (http://www.example.org)");
  extract_links(text, sizeof(text)); // http://www.example.org
};
