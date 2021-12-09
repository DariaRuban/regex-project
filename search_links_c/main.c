#include <stdio.h>
#include <string.h>
#include "search_links.h"
#include "test_search_links.h"

int main(void) {
  // test cases, results will be printed under the line
  test_extract_links();
  
  printf( "---------Program---------\n");
  // extract_links() from text in file
  find_links_in_file("hyperlinks.txt", 15);
  
  return 0;
}

