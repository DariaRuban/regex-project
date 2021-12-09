#include <stdio.h>
#include <string.h>
#include "search_links.h"

int is_hyperlink(char *word, int length){
  char http[] = "http";
  char slashes[] = "://";
  int  ind = 0;

  // check if word starts with 'http://' or 'https://'
  for(int i = ind; i < 4; i++){
    if (word[i] != http[i]) return 0;
    ind++;
  }

  if (word[ind] == 's') ind++;

  for (int i = 0; i < 3; i++){
    if (word[ind + i] != slashes[i]) return 0;
  }

  return 1;
}

void replace_char_with_whitespace(char *text, char symbol){
  int i = 0;
  char *result;
  result = strchr(text, symbol);  
  while (result != NULL){
    result[0] = ' ';
    result = strchr(text, symbol);
    i++;
  }
}

void extract_links(char* text, int size) {
  // to have only whitespaces around the links
  replace_char_with_whitespace(text, '"');
  replace_char_with_whitespace(text, '(');
  replace_char_with_whitespace(text, ')');
  // Split text on words by whitespace
  char * token = strtok(text, " ");
  while( token != NULL ) {
    // check if word is hyperlink
    if (is_hyperlink(token, sizeof(token) == 1)){
      printf("%s\n", token); 
    }
    token = strtok(NULL, " ");
  }
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