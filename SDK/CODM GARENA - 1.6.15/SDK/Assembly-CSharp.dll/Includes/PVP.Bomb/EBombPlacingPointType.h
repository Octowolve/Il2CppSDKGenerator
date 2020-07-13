#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class EBombPlacingPointType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "EBombPlacingPointType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& APoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& BPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Unknown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
