# Part 1: Building the Application
FROM ubuntu:24.04 as builder

RUN apt-get update -y && \
    apt-get upgrade -y && \
    apt-get dist-upgrade -y

RUN apt-get install -y --no-install-recommends \
    cmake \
    build-essential

# Copying source files into the Docker image
ADD . /opt/sources
WORKDIR /opt/sources

# Build the application
RUN mkdir build && \
    cd build && \
    cmake -D CMAKE_BUILD_TYPE=Release .. && \
    make && \
    make test && \
    cp helloworld /tmp

# Part 2: Bundle the application
FROM ubuntu:24.04

RUN apt-get update -y && \
    apt-get upgrade -y && \
    apt-get dist-upgrade -y

WORKDIR /opt
COPY --from=builder /tmp/helloworld .

# The container starts by running the helloworld binary
ENTRYPOINT ["/opt/helloworld"]
