# Undefined Behavior with std::vector<bool>

This repository demonstrates a common, yet subtle, bug in C++ involving `std::vector<bool>`.  When you attempt to get the size of an empty `std::vector<bool>`, undefined behavior can result. This is due to the specialized implementation of `std::vector<bool>` which differs from other `std::vector` types.

**Bug:**
The bug lies in accessing the size of an empty `std::vector<bool>`.  Although seemingly innocuous, this action can lead to unpredictable program behavior, including crashes or incorrect results.

**Solution:**
The solution is to explicitly check for emptiness before accessing the size or performing other operations on the vector.  Alternatively, consider using a different container such as `std::vector<int>` or `std::vector<char>` if a simple boolean value is not sufficient.