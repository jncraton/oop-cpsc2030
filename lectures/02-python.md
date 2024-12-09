Python
======

Overview 
--------

- Multi-paradigm programming language
  - Imperative - Instructions executed in order
  - Functional - Functions be used used as values
  - Object-Oriented - Combines data and behavior

Using Python
------------

- Interactive Mode (REPL)
  - Run `python` in the shell
- Script mode
  - Run `python myscript.py` in the shell

Significant Whitespace
----------------------

- Indentation is part of the language syntax
- Lines ending with a `:` expect indentation to follow
- `{}` are not used to wrap blocks as in other languages

Whitespace
----------

- PEP8 specifies that 4 spaces should be used for indentation
- Tabs should not be used for indentation in Python

Line Termination
----------------

- Python lines are terminated by a newline character
- They should not be terminated by a `;`

Comments
--------

- Comments in Python begin with `#`
- There are no multiline comments in Python

Docstrings
----------

- docstrings are used to annotate modules, classes, and functions
- They should be the first element within what they are describing

Logical Operators
-----------------

Python uses keywords for logical operators

| Python | C |
| --- | --- |
| `and` | `&&` |
| `or` | `||` |
| `not` | `!` |

Conditionals
------------

- `if`, `else`, and `elif` (else if) are used for branching

```python
if i > 0:
  print("positive")
elif i < 0:
  print("negative")
```

Indefinite Iteration
--------------------

While loops function as follows:

```python
while condition:
  # Do something
```

Definite Iteration
------------------

- `for` is used to iterate over an iterable

```python
for i in range(start, stop, step):
  print(i)
```
