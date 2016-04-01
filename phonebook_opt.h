#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16

/* TODO: After modifying the original version, uncomment the following
 * line to set OPT properly */
// #define OPT 1
/* original version */

typedef struct __PHONE_BOOK_ENTRY {

    char lastName[MAX_LAST_NAME_SIZE];

    char firstName[16];

    char email[16];

    char phone[10];

    char cell[10];

    char addr1[16];

    char addr2[16];

    char city[16];

    char state[2];

    char zip[5];

    struct __PHONE_BOOK_ENTRY *pNext;

} entry1;



entry1 *findName1(char lastname[], entry1 *pHead);

entry1 *append1(char lastName[], entry1 *e);



typedef struct __LASTNAME_ONLY_ENTRY {

    char lastName[MAX_LAST_NAME_SIZE];

    entry1 *detail;

    struct __LASTNAME_ONLY_ENTRY *pNext;

} entry;


entry *findName(char lastname[], entry *pHead);
entry *append(char lastName[], entry *e);

#endif
