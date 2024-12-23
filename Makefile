CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -std=c++17
SRCS = main.cpp Transformer.cpp Autobot.cpp Decepticon.cpp
OBJS = $(SRCS:.cpp=.o)


TARGET = transformers


all: $(TARGET)


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f *.o $(TARGET)

.PHONY: all clean