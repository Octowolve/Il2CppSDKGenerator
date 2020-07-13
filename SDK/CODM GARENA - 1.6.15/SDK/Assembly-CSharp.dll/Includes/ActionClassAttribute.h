#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionClassAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionClassAttribute"));
	}

	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getClassInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> static T getClassInfo(uintptr_t inType, uintptr_t* outTitle, uintptr_t* outInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4A12B84))(0, inType, outTitle, outInfo);
	}

};

}
