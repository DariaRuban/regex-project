#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
  int is_hyperlink(char *word, int length);
  void replace_char_with_whitespace(char *text, char symbol);
  void extract_links(char* text, int size);
  void find_links_in_file(char filename[], int size);
#endif


