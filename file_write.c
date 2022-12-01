/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* invclear.c (Chapter 22, page 574) */
/* Modifies a file of part records by setting the quantity
   on hand to zero for all records */

#include <stdio.h>
#include <stdlib.h>
# include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 10

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} inventory[MAX_PARTS];

int num_parts;

int main(void)
{
  FILE *fp;
  int i;

  if ((fp = fopen("inventory.txt", "wb+")) == NULL) {
    fprintf(stderr, "Can't open inventory file\n");
    exit(EXIT_FAILURE);
  }

  
  for (i = 0; i < MAX_PARTS; i++)
  {
     inventory[i].on_hand = 5;
     inventory[i].number = i;
     strcpy(inventory[i].name, "abc");
     
  }
  
  int ret = fwrite(inventory, sizeof(struct part), MAX_PARTS, fp);
  printf("%d", ret);
  fclose(fp);

  return 0;
}