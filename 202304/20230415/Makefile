TARGET = a.out
ARG = -Wall -c
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))

$(TARGET):$(OBJ)
	$(CXX) $^ -o $@
%.o:%.cpp
	$(CXX) $< -o $@ $(ARG)
.PHONY:clean
clean:
	$(RM) $(OBJ) $(TARGET)
