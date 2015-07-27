SRC=src
INC=inc
OBJ=obj
DIST=dist
EXE=fibonacci.exe
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))