#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIButtonReddot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIButtonReddot"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Obj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ReddotObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnObjClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIButtonReddot*))(Il2CppBase() + 0x39ACADC))(this);
	}
	template <typename T = void> T CheckReddot() {
		return ((T (*)(UIButtonReddot*))(Il2CppBase() + 0x39ACD70))(this);
	}
	template <typename T = void> T OnObjClick() {
		return ((T (*)(UIButtonReddot*))(Il2CppBase() + 0x39ACF7C))(this);
	}
	template <typename T = void> T Startm__0(uintptr_t fakeObject) {
		return ((T (*)(UIButtonReddot*, uintptr_t))(Il2CppBase() + 0x39AD0B0))(this, fakeObject);
	}

};

}
