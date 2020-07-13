#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RawSH
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RawSH"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& shr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& shg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& shb() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFromSH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToSH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T GetFromSH(uintptr_t sh) {
		return ((T (*)(RawSH*, uintptr_t))(Il2CppBase() + 0x4938610))(this, sh);
	}
	template <typename T = uintptr_t> T ToSH() {
		return ((T (*)(RawSH*))(Il2CppBase() + 0x49387E0))(this);
	}

};

}
