#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScaleMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "ScaleMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ConstantPixelSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ScaleWithScreenSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ConstantPhysicalSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
