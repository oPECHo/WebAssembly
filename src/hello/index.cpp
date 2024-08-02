#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
char *c_hello() {
    return "Hello World"; 
}
