# make的变量 target:生成目标 src:源文件 obj:需要的依赖 arg:编译参数
TARGET = a.out
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))
ARG =  -c -Wall

# make变量的引用:$(变量名)
# 其中冒号前面可以写成$@ 冒号后面可以写成$^ 冒号后边的第一个是$<
# 在make里面 g++被封成了$(CXX)

# 以obj作为依赖生成target
$(TARGET): $(OBJ)
	$(CXX) $^ -o $@ $(ARG)

# 以所有.cpp格式文件作为依赖生成.o格式文件
%.o: %.cpp
	$(CXX) $< -o $@ $(ARG)

# 清除.o格式文件
$(RM) $(OBJ) $(TARGET)
