#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LabelFixup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "LabelFixup"));
	}

	template <typename T = int32_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& label_idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
