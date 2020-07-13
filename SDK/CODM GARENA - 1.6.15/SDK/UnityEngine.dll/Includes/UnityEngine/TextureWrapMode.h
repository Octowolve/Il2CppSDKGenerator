#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TextureWrapMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TextureWrapMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Repeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Clamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
