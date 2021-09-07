SRC = unity/unity.c\
src/computerstoremanagement.c\
src/conio1.c\
test/test_computerstoremanagement.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = computerstoremanagement.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
