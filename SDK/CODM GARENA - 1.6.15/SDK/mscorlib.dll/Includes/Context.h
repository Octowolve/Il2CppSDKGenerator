#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Context
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Context"));
	}

	template <typename T = uintptr_t> T& Option() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& NeverMatchFlags() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& AlwaysMatchFlags() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Buffer1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Buffer2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PrevCode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& PrevSortKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& QuickCheckPossible() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
