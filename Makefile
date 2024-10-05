CXX = gcc
TARGET = fat.c
OUTPUT = fat

.PHONY: all
all: $(OUTPUT)

$(OUTPUT):
	$(CXX) -o $(OUTPUT) $(TARGET)
