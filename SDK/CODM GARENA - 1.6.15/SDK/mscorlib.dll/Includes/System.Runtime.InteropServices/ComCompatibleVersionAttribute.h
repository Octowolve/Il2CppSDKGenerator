#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class ComCompatibleVersionAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "ComCompatibleVersionAttribute"));
	}

	template <typename T = int32_t> T& major() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& minor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& build() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& revision() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
