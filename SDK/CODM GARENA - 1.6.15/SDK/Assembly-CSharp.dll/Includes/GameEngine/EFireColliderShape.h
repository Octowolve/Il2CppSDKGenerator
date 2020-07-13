#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EFireColliderShape
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EFireColliderShape"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EShape_Capsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EShape_OBB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EShape_Other() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
