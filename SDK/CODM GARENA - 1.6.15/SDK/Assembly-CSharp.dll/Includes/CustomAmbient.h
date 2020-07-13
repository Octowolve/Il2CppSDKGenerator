#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomAmbient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomAmbient"));
	}

	template <typename T = float> T& Intensity() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Sky() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Save() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Apply() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Save() {
		return ((T (*)(CustomAmbient*))(Il2CppBase() + 0x415C54C))(this);
	}
	template <typename T = void> T Apply() {
		return ((T (*)(CustomAmbient*))(Il2CppBase() + 0x415C628))(this);
	}

};

}
