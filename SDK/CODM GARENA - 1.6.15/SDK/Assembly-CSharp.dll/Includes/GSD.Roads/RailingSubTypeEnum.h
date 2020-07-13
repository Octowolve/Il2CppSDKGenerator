#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GSD.Roads {

class RailingSubTypeEnum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GSD.Roads", "RailingSubTypeEnum"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Both() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
