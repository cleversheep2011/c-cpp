# make的变量 target:生成目标 arg:编译参数 src:源文件 obj:需要的依赖
TARGET = a.out
ARG = -Wall
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))

# make变量的引用:$(变量名)
# 其中冒号前面可以写成$@ 冒号后面可以写成$^ 冒号后边的第一个是$<
# 在make里面 g++被封成了$(CXX)

# 以obj作为依赖生成target 然后删掉生成的.o文件
$(TARGET): $(OBJ)
	$(CXX) $^ -o $@
	$(RM) $(OBJ)

# 以所有.cpp格式文件作为依赖生成.o格式文件
%.o: %.cpp
	$(CXX) $< -c -o $@ $(ARG)

#执行make clean时清除out文件
.PHONY: clean
clean:
	$(RM) $(TARGET)
