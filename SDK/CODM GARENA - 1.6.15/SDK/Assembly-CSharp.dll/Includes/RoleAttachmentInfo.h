#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoleAttachmentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoleAttachmentInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& skillInfoList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(RoleAttachmentInfo*))(Il2CppBase() + 0x29920C8))(this);
	}

};

}
