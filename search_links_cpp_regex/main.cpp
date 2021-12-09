#include <iostream>
#include <string>
#include <cstring>
#include <regex>
#include "search_links.h"
#include "test_search_links.h"
using namespace std;

int main(void) {
  // test cases, results will be printed 
  test_extract_links();

  printf( "--------Program---------\n");
  // extract_links() from text in file
  find_links_in_file((char*)"hyperlinks.txt", 15);
  
  return 0;
}
