## Build

Add `#include <utility>` after line 23 on `lib/rpclib/include/rpc/nonstd/optional.hpp` (In order to fix [rpclib#142](https://github.com/rpclib/rpclib/issues/142))

Run `cd scripts && ./prebuild && cd ..`

Build it: `cmake --build build --target all --config Debug -- -j 6`