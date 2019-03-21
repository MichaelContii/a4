#include <assert.h> 
#include "dynarray.h"

dynarray dynarray_new(int length) {
  (void) length;
}

dynarray dynarray_new(int source[], int length) {
  (void) length;
  (void) source;
}

int dynarray_length(dynarray *arr) {
  (void) arr;
}

void dynarray_append(dynarray *arr, int val) {
  (void) arr;
  (void) val;
}

int dynarray_get(dynarray *arr, int idx) {
  (void) arr;
  (void) idx;
}

void dynarray_set(dynarray *arr, int idx, int val) {
  (void) arr;
  (void) idx;
  (void) val;
}

int *dynarray_at(dynarray *arr, int idx) {
  (void) arr;
  (void) idx;
}

dynarray dynarray_slice(dynarray *arr, int start, int len) {
  (void) arr;
  (void) start;
  (void) len;
}