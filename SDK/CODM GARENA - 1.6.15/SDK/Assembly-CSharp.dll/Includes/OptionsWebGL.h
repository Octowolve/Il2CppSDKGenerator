#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionsWebGL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptionsWebGL"));
	}

	template <typename T = uintptr_t> T& externalLibrary() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& useTextureMips() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModified() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsModified() {
		return ((T (*)(OptionsWebGL*))(Il2CppBase() + 0x4121124))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsModified() {
		return ((T (*)(OptionsWebGL*))(Il2CppBase() + 0x41211EC))(this);
	}

};

}
