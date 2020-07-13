#pragma once
#include <Il2Cpp/Il2Cpp.h>

class rotCubemapControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "rotCubemapControl"));
	}

	template <typename T = float> T& m_cubemapAngle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_passRotParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(rotCubemapControl*))(Il2CppBase() + 0x4147824))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(rotCubemapControl*))(Il2CppBase() + 0x4147DC0))(this);
	}
	template <typename T = void> T passRotParams() {
		return ((T (*)(rotCubemapControl*))(Il2CppBase() + 0x41478C8))(this);
	}

};

}
