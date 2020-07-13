#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionsIOS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptionsIOS"));
	}

	template <typename T = bool> T& useYpCbCr420Textures() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModified() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsModified() {
		return ((T (*)(OptionsIOS*))(Il2CppBase() + 0x412105C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsModified() {
		return ((T (*)(OptionsIOS*))(Il2CppBase() + 0x4121120))(this);
	}

};

}
