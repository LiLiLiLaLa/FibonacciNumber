test.out:test.c
	gcc test.c -o test.out

.PHONY:clean
clean:
	rm -rf test.out