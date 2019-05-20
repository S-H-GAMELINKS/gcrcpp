FROM gcc:latest
COPY . /gcrcpp
WORKDIR /gcrcpp
EXPOSE 3000
RUN g++ main.cpp cpp-httplib/httplib.h -std=c++17 -pthread 
CMD ["./a.out"]