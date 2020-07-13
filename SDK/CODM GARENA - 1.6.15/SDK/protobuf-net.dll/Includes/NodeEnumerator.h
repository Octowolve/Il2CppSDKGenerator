#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NodeEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "", "NodeEnumerator"));
	}

	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& node() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x5061AE4))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x5061AF0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x5061AF8))(this);
	}

};

}
