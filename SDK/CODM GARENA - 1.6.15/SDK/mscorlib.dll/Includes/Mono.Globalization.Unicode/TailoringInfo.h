#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Globalization.Unicode {

class TailoringInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Globalization.Unicode", "TailoringInfo"));
	}

	template <typename T = int32_t> T& LCID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& TailoringIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& TailoringCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& FrenchSort() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
