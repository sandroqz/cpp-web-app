FROM httpd:2.4.29

COPY httpd.conf /usr/local/apache2/conf/httpd.conf

RUN apt-get update && apt-get install -y g++

COPY hello.cpp /usr/local/apache2/cgi-bin/

RUN g++ -O3 /usr/local/apache2/cgi-bin/hello.cpp -o /usr/local/apache2/cgi-bin/hello.cgi

EXPOSE 80
