#ifndef GLOBALS_H
#define GLOBALS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "../headers/error.h"
#include "../headers/line.h"
#include "../headers/label.h"
#include "../headers/op_list.h"
#include "../headers/memory_struct.h"
#include "../headers/label.h"
#include "../headers/error.h"


//מספר רגיסטרים
#define NUM_OF_REG 8
//גודל מילה\רגיסטר
#define WORD_LEN 24
//גודל זיכרון 21^2
#define MEM_SIZE 2097151
//אורך מקסימלי של שורה בקובץ המקור
#define MAX_LINE_LEN 80

#define MAX_LABEL_LENGTH 31

#define SUM_OPERATIONS 16

#define INSTRUCTION_COUNT 4

/*minimum parameters the program needs to start*/
#define MIN_PARAM 2

/*initial capacity for size of array of numbers (.data)*/
#define INIT_CAPACITY 10

#define INIT_MEMORY 100
#define COMMENT ';'
#define COLON ':'
#define QUOTE '"'
#define COMMA ','
#define SPACE ' '
#define NUMBER_SIGN '#'
#define AMPERSAND '&'
#define MINUS '-'
#define PLUS '+'
#define POINT '.'
#define NULL_CHAR '\0'
#define DECIMAL 10
#define EXTERN_INDEX 3
#define MASK 0xFF
#define ZERO 0
#define TWO 2
#define MIN_21BIT -1048576
#define MAX_21BIT 1048575
#define THREE_BITS_SHIFT 3

#endif