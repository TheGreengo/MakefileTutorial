files := file1 file2

some_file: $(files)
	@touch some_file

file1:
	@touch file1

file2:
	@touch file2

x := buenos dias
hi:
	@ printf "$x\n"
	@ printf '$x\n'
	@ echo $x
	@ echo $(x)
	@ echo ${x}

.PHONY: clean
clean:
	@rm -f file1 file2 some_file