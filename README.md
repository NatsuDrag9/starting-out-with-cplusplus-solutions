# starting-out-with-cplusplus-solutions

This repository consists of my solutions to the programming challenges in the book, [Starting Out with C++ from Control Structures to Objects](https://www.amazon.com/Starting-Out-Control-Structures-Objects/dp/0134498372) by Tony Gaddis.

---

## Chapter One Solutions
### Build and run
1.) Pull this git repo <br />
```git pull origin main```

2.) Change the directory <br />
```cd Chapter-1```

3.) Make the shell script executable <br />
```chmod +x run_executables.sh```

4.) Run the bash shell script <br />
```./run_executables.sh```

If the shell script does not run: <br />
1.) Change the directory <br />
```cd Chapter-1```

2.) Run the make command <br />
```make all```

3.) Change to build directory <br />
```cd build```

4.) Run the executable <br />
```./pc_1.out```

### Build and run using Docker (Recommended)
Ensure that you have docker engine installed in your system. If not, visit [Install Docker Engine](https://docs.docker.com/engine/install/) for the installation guide.

Run the following commands in the terminal

1.) Pull this git repo <br />
```git pull origin main```

2.) Build using docker. Omit sudo if the **user** has been added to **docker** group <br />
```sudo docker build -t starting-out-with-cpp:v1 ./```. <br /> 

3.) Run using the docker engine <br />
```sudo docker run --rm starting-out-with-cpp:v1```

---