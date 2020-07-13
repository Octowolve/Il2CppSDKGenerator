#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Node
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "", "Node"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(Node*, int32_t))(Il2CppBase() + 0x5061350))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(Node*, int32_t, uintptr_t))(Il2CppBase() + 0x506185C))(this, index, value);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(Node*))(Il2CppBase() + 0x5061320))(this);
	}
	template <typename T = void> T RemoveLastWithMutate() {
		return ((T (*)(Node*))(Il2CppBase() + 0x5061980))(this);
	}
	template <typename T = uintptr_t> T Append(uintptr_t value) {
		return ((T (*)(Node*, uintptr_t))(Il2CppBase() + 0x506117C))(this, value);
	}
	template <typename T = int32_t> T IndexOfReference(uintptr_t instance) {
		return ((T (*)(Node*, uintptr_t))(Il2CppBase() + 0x506154C))(this, instance);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t offset) {
		return ((T (*)(Node*, uintptr_t, int32_t))(Il2CppBase() + 0x50610FC))(this, array, offset);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Node*))(Il2CppBase() + 0x5061A2C))(this);
	}

};

}
