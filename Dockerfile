FROM docker.io/gcc

RUN mkdir code
WORKDIR code

COPY . .

CMD make test
