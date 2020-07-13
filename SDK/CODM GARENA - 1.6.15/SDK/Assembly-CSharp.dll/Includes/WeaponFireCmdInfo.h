#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireCmdInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireCmdInfo"));
	}

	template <typename T = bool> T& IsAiming() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsSingleShot() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = int32_t> T& AmmoCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& FireCompIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& CommandID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& RightOrLeft() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& FirePos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(WeaponFireCmdInfo*))(Il2CppBase() + 0x19C1644))(this);
	}

};

}
