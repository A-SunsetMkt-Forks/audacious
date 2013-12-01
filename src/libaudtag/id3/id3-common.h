/*
 * id3-common.h
 * Copyright 2013 John Lindgren
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions, and the following disclaimer in the documentation
 *    provided with the distribution.
 *
 * This software is provided "as is" and without any warranty, express or
 * implied. In no event shall the authors be liable for any damages arising from
 * the use of this software.
 */

#ifndef AUDTAG_ID3_COMMON_H
#define AUDTAG_ID3_COMMON_H

#include <stdint.h>
#include <libaudcore/tuple.h>

void id3_strnlen (const char * data, int size, int encoding,
 int * bytes_without_nul, int * bytes_with_nul);
char * id3_convert (const char * data, int size, int encoding);
char * id3_decode_text (const char * data, int size);

void id3_associate_string (Tuple * tuple, int field, const char * data, int size);
void id3_associate_int (Tuple * tuple, int field, const char * data, int size);
void id3_decode_genre (Tuple * tuple, const char * data, int size);
void id3_decode_comment (Tuple * tuple, const char * data, int size);
void id3_decode_rva (Tuple * tuple, const char * data, int size);

bool_t id3_decode_picture (const char * data, int size, int * type,
 void * * image_data, int64_t * image_size);

#endif
