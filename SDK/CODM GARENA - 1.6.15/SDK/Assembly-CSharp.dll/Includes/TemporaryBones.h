#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TemporaryBones
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TemporaryBones"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_OriginalBones() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_OriginalRootBone() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TemporaryBones*))(Il2CppBase() + 0x46562F8))(this);
	}
	template <typename T = void> T ReplaceBones(uintptr_t smr, uintptr_t root, uintptr_t rootBone) {
		return ((T (*)(TemporaryBones*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x465644C))(this, smr, root, rootBone);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TemporaryBones*))(Il2CppBase() + 0x4656784))(this);
	}

};

}
