/*
 *
 * Copyright (c) 1994 by Nick Ing-Simmons.  All Rights Reserved.
 *
 */
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#include <stdio.h>
#include "phones.h"

#ifdef __STDC__
#define PHONE(nm,br,am,ex) #nm,
#else
#define PHONE(nm,br,am,ex) "nm",
#endif
char *ph_name[] =
{" ",
#include "phones.def"
 NULL};
#undef PHONE

#define PHONE(nm,br,am,ex) br,
char *ph_br[] =
{" ",
#include "phones.def"
 NULL};
#undef PHONE

#define PHONE(nm,br,am,ex) am,
char *ph_am[] =
{" ",
#include "phones.def"
 NULL};
#undef PHONE
