CC=g++
CFLAGS= --std=c++17 -I.. -O1
DEPS = #timecost.h
OBJ = main.o 

# 对应对名称生成对应对.0文件
%.o:%.cpp $(DEPS)
	$(CC) -c -o $@ $<  $(CFLAGS)

# 链接对应的文件	
test3: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -rf  *.o test