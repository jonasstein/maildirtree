/* maildirtree.h: see maildirtree.c for full copyright. 
 * (C) 2003 by Joshua Kwan. */

#ifndef INCLUDED_maildirtree_h
#define INCLUDED_maildirtree_h

#define _GNU_SOURCE /* getopt_long */

/* Compile time aesthetic options. */
#define INDENT_LEN  3
#define COUNT_START 40

#if __STDC_VERSION__ < 199901L
typedef enum { false = 0, true } bool;
#endif

struct Directory {
  char * name;
  struct Directory ** subdirs;
  int count;
  unsigned int unread;
  unsigned int read;
  struct Directory * parent;
  struct Directory * kid;
  bool last;
};

#endif /* !INCLUDED_maildirtree_h */
