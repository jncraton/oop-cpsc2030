# Multiprocessing

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

threads = [CounterThread() for _ in range(10)]
for thread in threads:
    thread.start()
```

## Thread Pools

- Manage a fixed number of threads
- Use `concurrent.futures.ThreadPoolExecutor`

## Example: Thread Pool

```python
from concurrent.futures import ThreadPoolExecutor

def task(n):
    return n * n

with ThreadPoolExecutor(max_workers=5) as executor:
    results = list(executor.map(task, range(10)))
    print(results)
```

## Multiprocessing

- Extending `Process` for parallel tasks
- Similar to threading but for processes

## Why Multiprocessing?

- Utilize multiple CPU cores
- Avoid GIL (Global Interpreter Lock) limitations
- [PEP703](https://peps.python.org/pep-0703/)

## Comparing Threads and Processes

- Threads: Share memory, lightweight
- Processes: Isolated memory, heavier

## Extending `Process`

- Inherit from `multiprocessing.Process`
- Override `run` method

## Example: Basic Process

```python
from multiprocessing import Process

class MyProcess(Process):
    def run(self):
        print("Process is running")

if __name__ == "__main__":
    p = MyProcess()
    p.start()
    p.join()
```

## Exercise

Create a `CounterProcess` that counts from 1 to 10 and prints each number

## Synchronization with Locks

- Use `multiprocessing.Lock` for synchronization
- Similar to threading locks

## Example: Synchronized Counter

```python
from multiprocessing import Process, Lock

class CounterProcess(Process):
    def __init__(self, lock, count=0):
        super().__init__()
        self.lock = lock
        self.count = count

    def run(self):
        for _ in range(10):
            with self.lock:
                self.count += 1
                print(self.count)

if __name__ == "__main__":
    lock = Lock()
    p1 = CounterProcess(lock)
    p2 = CounterProcess(lock)
    p1.start()
    p2.start()
    p1.join()
    p2.join()
```

## Communicating Between Processes

- Use `multiprocessing.Queue` or `multiprocessing.Pipe`
- Example with `Queue`

## Example: Using Queue

```python
from multiprocessing import Process, Queue

class SenderProcess(Process):
    def __init__(self, queue):
        super().__init__()
        self.queue = queue

    def run(self):
        for i in range(5):
            self.queue.put(i)

class ReceiverProcess(Process):
    def __init__(self, queue):
        super().__init__()
        self.queue = queue

    def run(self):
        while True:
            item = self.queue.get()
            if item is None:
                break
            print(f"Received: {item}")

if __name__ == "__main__":
    queue = Queue()
    sender = SenderProcess(queue)
    receiver = ReceiverProcess(queue)
    sender.start()
    receiver.start()
    sender.join()
    queue.put(None)
    receiver.join()
```
