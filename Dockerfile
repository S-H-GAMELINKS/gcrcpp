FROM gcc:latest
COPY . /gcrcpp
WORKDIR /gcrcpp
EXPOSE 8080
RUN g++ main.cpp cpp-httplib/httplib.h -std=c++17 -pthread 
CMD ["./a.out"]