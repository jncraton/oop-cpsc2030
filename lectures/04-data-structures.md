Data Structures
===============

Storing Data
------------

- Literals can be used to create individual values
- It is often helpful to store collections of values

Lists
-----

- Store a sequence of values of any type
- Mutable
- [docs](https://docs.python.org/3/library/stdtypes.html#list)

Example
-------

```python
nums = [1, 2, 3]
print(nums[1])
```

Tuples
------

- Store a sequence of values of any type
- Immutable
- [docs](https://docs.python.org/3/library/stdtypes.html#tuple)

Example
-------

```python
nums = (1, 2, 3)
print(nums[1])
```

Dictionaries
------------

- Store values of any type mapped to keys
- Mutable
- [docs](https://docs.python.org/3/library/stdtypes.html#dict)

Example
-------

```python
legs = {'cat': 4, 'human': 2, 'spider': 8}

print(legs['cat'])
```

Sets
----

- Store unique values of any type
- Values are unordered
- [docs](https://docs.python.org/3/library/stdtypes.html#set)

Example
-------

```python
s = {1, 2, 3 ,2, 1}

print(len(s))
```

Nested Data Structures
----------------------

- Data structures can include other data structures
