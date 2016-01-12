#ifndef LIBRARY_H
#define LIBRARY_H

#ifdef __cplusplus
extern "C" {
#endif

int hello(char* text);

float distance(float x1, float y1, float x2, float y2);

void print_zlib();

#ifdef __cplusplus
}
#endif

#endif /* !LIBRARY_H */
