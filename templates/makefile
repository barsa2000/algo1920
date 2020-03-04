CC = gcc
RM = rm -f
CFLAGS = -g -Wall
TARGET = main
DIFF = diff
DIFF_FLAGS = -Z -B
TEST_DIR = TestSet
CASE_COUNT := $(shell ls -l $(TEST_DIR)/input* | wc -l)


all: $(TARGET)

$(TARGET): $(TARGET).c
	@echo compiling $(TARGET)
	@$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	@echo removing $(TARGET)
	@$(RM) $(TARGET)

check: $(TARGET)
	@i=0; while [[ $$i -le $$(($(CASE_COUNT) - 1))  ]]; do \
		echo test $$i; \
		cat "$(TEST_DIR)/input$$i.txt" | ./$(TARGET) | $(DIFF) $(DIFF_FLAGS) "$(TEST_DIR)/output$$i.txt" - && echo success || echo failed; \
		((i = i + 1)) ; \
	done