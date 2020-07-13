#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UILocalize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILocalize"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T set_value(Il2CppString* value) {
		return ((T (*)(UILocalize*, Il2CppString*))(Il2CppBase() + 0x2F60FD0))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UILocalize*))(Il2CppBase() + 0x2F61670))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UILocalize*))(Il2CppBase() + 0x2F61940))(this);
	}
	template <typename T = void> T OnLocalize() {
		return ((T (*)(UILocalize*))(Il2CppBase() + 0x2F61720))(this);
	}

};

}
