#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Chunk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "Chunk"));
	}

	template <typename T = uint32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& size() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
