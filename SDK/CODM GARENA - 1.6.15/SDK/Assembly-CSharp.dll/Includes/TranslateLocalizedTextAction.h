#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TranslateLocalizedTextAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TranslateLocalizedTextAction"));
	}

	template <typename T = uintptr_t> T& textLocID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& textLocParams() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& localizedText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(TranslateLocalizedTextAction*))(Il2CppBase() + 0x49689B0))(this);
	}
	template <typename T = uintptr_t> static T OnEnterm__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4968BF8))(0, e);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(TranslateLocalizedTextAction*))(Il2CppBase() + 0x4968C3C))(this);
	}

};

}
