# Concurrent Programming

## Introduction to Concurrency

- Running multiple tasks simultaneously
- Improves performance and responsiveness

## What is a Thread?

- Smallest unit of execution
- Runs concurrently with other threads

## Python Threading Module

- Part of the standard library
- `threading` module provides Thread class

## Creating a Thread

- Import `Thread` from `threading`
- Define a function to run in the thread

## Example: Simple Thread

```python
import threading

def print_numbers():
    for i in range(5):
        print(i)

thread = threading.Thread(target=print_numbers)
thread.start()
```

## Extending the Thread Class

- Create a class that extends `Thread`
- Override the `run` method

## Example: Thread Class

```python
import threading

class PrintNumbersThread(threading.Thread):
    def run(self):
        for i in range(5):
            print(i)

thread = PrintNumbersThread()
thread.start()
```

## Running Multiple Threads

- Create multiple thread instances
- Start each thread

## Example: Multiple Threads

```python
import threading

class PrintNumbersThread(threading.Thread):
    def run(self):
        for i in range(5):
            print(i)

threads = [PrintNumbersThread() for _ in range(3)]
for thread in threads:
    thread.start()
```

## Background Work

- Threads can perform background tasks
- Main program continues execution

## Example: Background Work

```python
import threading
import time

class BackgroundTask(threading.Thread):
    def run(self):
        time.sleep(2)
        print("Task completed")

thread = BackgroundTask()
thread.start()
print("Main program continues")
```

## Exercise

- Create a thread that prints "Hello, World" 10 times
- Start the thread and print "Main program continues" immediately

## Exercise Solution

```python
import threading

class HelloWorldThread(threading.Thread):
    def run(self):
        for _ in range(10):
            print("Hello, World")

thread = HelloWorldThread()
thread.start()
print("Main program continues")
```
