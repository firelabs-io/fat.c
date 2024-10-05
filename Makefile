CXX = gcc
TARGET = fat.c
OTHER_TARGET = other/fat.c
OUTPUT = fat
OTHER_OUTPUT = other/fat

.PHONY: all other
all: $(OUTPUT) 

other: $(OTHER_OUTPUT)

$(OUTPUT):
	$(CXX) -o $(OUTPUT) $(TARGET)

$(OTHER_OUTPUT):
	$(CXX) -o $(OTHER_OUTPUT) $(OTHER_TARGET)
