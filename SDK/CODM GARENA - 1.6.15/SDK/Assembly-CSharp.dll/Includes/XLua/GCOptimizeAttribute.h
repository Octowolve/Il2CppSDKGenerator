#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class GCOptimizeAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "GCOptimizeAttribute"));
	}

	template <typename T = uintptr_t> T& flag() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Flag() {
		return ((T (*)(GCOptimizeAttribute*))(Il2CppBase() + 0xF3A7FC))(this);
	}

};

}
