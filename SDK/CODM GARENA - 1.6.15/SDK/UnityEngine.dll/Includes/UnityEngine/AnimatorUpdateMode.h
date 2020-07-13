#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimatorUpdateMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimatorUpdateMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AnimatePhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& UnscaledTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
