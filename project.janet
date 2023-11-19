(declare-project
  :name "janet-whereami"
  :author "Ian Henry <ianthehenry@gmail.com>")

(declare-native
  :name "whereami"
  :cflags [;default-cflags "-Iwhereami/src"]
  :source ["main.c" "whereami/src/whereami.c"])
