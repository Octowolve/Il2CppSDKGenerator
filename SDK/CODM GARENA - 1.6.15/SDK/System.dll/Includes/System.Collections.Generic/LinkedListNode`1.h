#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class LinkedListNode1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Generic", "LinkedListNode`1"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& container() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& forward() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& back() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Detach() {
		return ((T (*)(LinkedListNode1*))(Il2CppBase() + 0x47A9188))(this);
	}
	template <typename T = void> T SelfReference(void* list) {
		return ((T (*)(LinkedListNode1*, void*))(Il2CppBase() + 0x47A91D4))(this, list);
	}
	template <typename T = void> T InsertBetween(void* previousNode, void* nextNode, void* list) {
		return ((T (*)(LinkedListNode1*, void*, void*, void*))(Il2CppBase() + 0x47A91E4))(this, previousNode, nextNode, list);
	}
	template <typename T = void*> T get_List() {
		return ((T (*)(LinkedListNode1*))(Il2CppBase() + 0x47A921C))(this);
	}
	template <typename T = void*> T get_Next() {
		return ((T (*)(LinkedListNode1*))(Il2CppBase() + 0x47A9224))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(LinkedListNode1*))(Il2CppBase() + 0x47A9248))(this);
	}

};

}
