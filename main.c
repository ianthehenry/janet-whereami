#include <whereami.h>
#include <janet.h>

static Janet cfun_exe(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 0);
  int length = wai_getExecutablePath(NULL, 0, NULL);
  if (length > 0) {
    uint8_t *path = janet_string_begin(length);
    wai_getExecutablePath((char *)path, length, NULL);
    return janet_wrap_string(janet_string_end(path));
  } else {
    return janet_wrap_nil();
  }
}

static JanetReg cfuns[] = {
  {"exe", cfun_exe, NULL},
  {NULL, NULL, NULL}
};

JANET_MODULE_ENTRY(JanetTable *env) {
  janet_cfuns(env, "whereami", cfuns);
}
