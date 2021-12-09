#include <stdio.h>
#include <string.h>
#include "search_links.h"
#include "test_search_links.h"

void test_extract_links(void) {
  printf( "--------Testing---------\n");
  char text[] = "some text http://some.link.com text.";
  char link[27];
  extract_links(text, sizeof(text)); // http://some.likkkgjhnk.coom
  strcpy(text, "href=\"http://www.example1.org\".");
  extract_links(text, sizeof(text)); // http://www.example1.org

  strcpy(text, "see here (http://www.example2.org)");
  extract_links(text, sizeof(text)); // http://www.example2.org
};
