#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class MaterialGlobalIlluminationFlags
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "MaterialGlobalIlluminationFlags"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& RealtimeEmissive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& BakedEmissive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EmissiveIsBlack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AnyEmissive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
