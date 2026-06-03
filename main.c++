#include <array>
#include <cstddef> 
/*<cstddef>: Places all definitions securely inside the std namespace (e.g., std::size_t).
 It may also optionally inject them into the global namespace depending on the compiler.*/

 constexpr  size_t HEAP_SIZE =  {1024 * 1024};
 alignas (std::max_align_t) std::array<std::byte, HEAP_SIZE> heap  {};

 int main (){


    return 0; 
 }