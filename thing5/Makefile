thing_wrong := *.c # Don't do this! '*' will not get expanded
thing_right := $(wildcard *.c)

all: three four

# Fails, because $(thing_wrong) is the string "*.o"
one: $(thing_wrong)
	@echo one

# Stays as *.o if there are no files that match this pattern :(
two: *.c
	@echo two

# Works as you would expect! In this case, it does nothing.
three: $(thing_right)
	@echo three

# Same as rule three
four: $(wildcard *.c)
	@echo four
