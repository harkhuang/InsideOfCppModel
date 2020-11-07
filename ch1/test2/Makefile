CC=g++
CFLAGS= --std=c++11 -I.
DEPS = timecost.h
OBJ = test.o 



# 由cpp 生成对应名称的o文件
%.o:%.cpp $(DEPS)
	$(CC) -c -o $@ $<  $(CFLAGS)

# 链接对应的文件	
test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf  *.o test