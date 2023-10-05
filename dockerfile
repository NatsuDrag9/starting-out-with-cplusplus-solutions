# Use the frolvlad/alpine-gcc image as the base image
FROM alpine:latest

# Install bash and GCC using apk manager of alpine Linux distribution
Run apk --update add bash gcc g++ make

# Set the working directory in the container
WORKDIR /app

# Copy src code to the container
COPY . .

# Make the run script executable
RUN chmod +x ./run.sh

# Entry point
CMD ["./run.sh"]