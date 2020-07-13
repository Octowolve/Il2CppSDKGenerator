#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class BMMAPAREA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "BM_MAP_AREA"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eBM_MAP_AREA_NONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eBM_MAP_AREA_APOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eBM_MAP_AREA_BPOINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
