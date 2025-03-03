# Using Multithreading

## Extending the Thread Class

- Inherit from `threading.Thread`
- Override the `run` method

## Example: Basic Thread

```python
import threading

class MyThread(threading.Thread):
    def run(self):
        print(f"Thread {self.name} is running")

thread = MyThread()
thread.start()
```

## Synchronization

- Prevent race conditions
- Use `threading.Lock`

## Example: Using Locks

```python
import threading

lock = threading.Lock()
counter = 0

class CounterThread(threading.Thread):
    def run(self):
        global counter
        with lock:
            counter += 1
            print(f"Counter: {counter}")

threads = [CounterThread() for _ in range(5)]
for thread in threads:
    thread.start()
```

## Exercise

- Create a shared list
- Use a lock to append to the list from multiple threads

## Thread Pools

- Manage a fixed number of threads
- Use `concurrent.futures.ThreadPoolExecutor`

## Example: Thread Pool

```python
from concurrent.futures import ThreadPoolExecutor

def task(n):
    return n * n

with ThreadPoolExecutor() as executor:
    results = list(executor.map(task, range(10)))
    print(results)
```

## Exercise

- Use a thread pool to download multiple web pages
- Print the length of each page content
