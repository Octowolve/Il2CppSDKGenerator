#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DomSignboardHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DomSignboardHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Signboards() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DomSignboardHUD*))(Il2CppBase() + 0x4178724))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DomSignboardHUD*))(Il2CppBase() + 0x4178A50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DomSignboardHUD*))(Il2CppBase() + 0x4178D00))(this);
	}

};

}
