#ifndef STACKS_H
#define STACKS_H
#define MAX_STACK_SIZE 10

// int stacks

typedef struct int_stack_t {
  int arr[MAX_STACK_SIZE];
  int top_index;
} int_stack_t;

int_stack_t int_stack() {
  int_stack_t s;
  s.top_index = -1;
  return s;
}

int push_int(int_stack_t *s, int item) {
  if (s->top_index < MAX_STACK_SIZE - 1) {
    s->arr[++(s->top_index)] = item;
    return 1;
  }
  return 0;
}

int pop_int(int_stack_t *s) {
  if (s->top_index >= 0)
    return s->arr[(s->top_index)--];
}

int peek_int(const int_stack_t s) {
  if (s.top_index >= 0)
    return s.arr[s.top_index];
}

// char stacks

typedef struct char_stack_t {
  char arr[MAX_STACK_SIZE];
  int top_index;
} char_stack_t;

char_stack_t char_stack() {
  char_stack_t s;
  s.top_index = -1;
  return s;
}

char push_char(char_stack_t *s, char item) {
  if (s->top_index < MAX_STACK_SIZE - 1) {
    s->arr[++(s->top_index)] = item;
    return 1;
  }
  return 0;
}

char pop_char(char_stack_t *s) {
  if (s->top_index >= 0)
    return s->arr[(s->top_index)--];
}

char peek_char(const char_stack_t s) {
  if (s.top_index >= 0)
    return s.arr[s.top_index];
}

#endif