#ifndef MORSE_H
#define MORSE_H

extern void (*morse_letter)(const char c);
void morse_word(const char* word);

#endif