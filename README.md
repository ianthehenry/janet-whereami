# `janet-whereami`

A Janet wrapper around [`whereami`](https://github.com/gpakosz/whereami). It exposes a single function, `exe`, which returns the absolute path to the currently executing executable.

It's like `readlink /proc/self/exe`, but cross-platform.

```
repl:1:> (import whereami)

repl:2:> (whereami/exe)
"/usr/local/bin/janet"
```
