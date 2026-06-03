# malloc

just learn c++ whit this project --->
create malloc from_scratch_with_c++


### `alignas`

`alignas` is a C++ keyword used to specify the memory alignment of a variable, object, or type.

Memory alignment determines the address boundaries where data is stored. Proper alignment can improve performance and is often required when working with low-level systems, SIMD instructions, or hardware-specific code.

Example:

```cpp
alignas(16) int value;
```

In this example, `value` will be stored at a memory address that is a multiple of 16.

Related keyword:

* `alignof(T)` returns the alignment requirement of type `T`.
