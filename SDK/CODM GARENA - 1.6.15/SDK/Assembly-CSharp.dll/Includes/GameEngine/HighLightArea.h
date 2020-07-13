#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HighLightArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HighLightArea"));
	}

	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& KeyName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_bHighLighting() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HighLighting() {
		return ((T (*)(HighLightArea*))(Il2CppBase() + 0x36FCB18))(this);
	}
	template <typename T = void> T set_HighLighting(bool value) {
		return ((T (*)(HighLightArea*, bool))(Il2CppBase() + 0x36FCB20))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(HighLightArea*))(Il2CppBase() + 0x36FCB28))(this);
	}

};

}
