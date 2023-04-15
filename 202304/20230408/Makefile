TARGET = a.out
ARG = -Wall
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))
$(TARGET): $(OBJ)
	$(CXX) $^ -o $@
%.o: %.cpp
	$(CXX) $< -c -o $@ $(ARG)
.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJ)
