#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransplantTestScript
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransplantTestScript"));
	}

	template <typename T = uintptr_t> T& otherRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& dsbrm() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestTransplantToOtherRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TransplantTestScript*))(Il2CppBase() + 0x4968D0C))(this);
	}
	template <typename T = void> T TestTransplantToOtherRoot() {
		return ((T (*)(TransplantTestScript*))(Il2CppBase() + 0x4968DC8))(this);
	}

};

}
