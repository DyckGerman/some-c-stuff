#ifndef USER_INTERACTIONS_H
#define USER_INTERACTIONS_H

#include "dictionary.h"

/**
 * Adds new word to the dictionary
 * @param dictionary - pointer to dictionary
 */
void new_word(struct Dictionary * dictionary);

/**
 * Prints all the words and definitions
 * @param dictionary - pointer to dictionary
 */
void show_dictionary(struct Dictionary * dictionary);

/**
 * Finds and prints all words that contain prefix
 * @param dictionary - pointer to dictionary
 */
void find_word(struct Dictionary * dictionary);

/**
 * Deletes the word
 * @param dictionary - pointer to dictionary
 */
void delete_word(struct Dictionary * dictionary);

/**
 * Saves the dictionary and closes the program
 */
void save_dictionary(struct Dictionary * dictionary);

/**
 * Seeks input stream to the end of line symbol
 */
void flush_istream();

#endif