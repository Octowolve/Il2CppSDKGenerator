#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponAttachmentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponAttachmentInfo"));
	}

	template <typename T = uintptr_t> T& weaponSkillInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& normalAttachmentList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(WeaponAttachmentInfo*))(Il2CppBase() + 0x38D4674))(this);
	}

};

}
