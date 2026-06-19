#include <array>
#include <cstddef>
#include<logic.h>
/*<cstddef>: Places all definitions securely inside the std namespace (e.g., std::size_t).
 It may also optionally inject them into the global namespace depending on the compiler.*/

constexpr size_t HEAP_SIZE = {1024 * 1024};
alignas(std::max_align_t) std::array<std::byte, HEAP_SIZE> heap{};
struct Block
{
   bool free{true};
   size_t size;
   Block* next;
};

Block* head = {nullptr};


void init_head (){
    head = reinterpret_cast<Block*>(heap.data());
    head->free = true;
    head->next = nullptr;
    head->size = HEAP_SIZE - sizeof(Block);
}

void* alloc(size_t size) {

    if (size == 0) return nullptr;

    if (!head) {
      init_head();
    }



}
int main()
{

   return 0;
}