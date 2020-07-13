#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarEquipConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarEquipConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& appendObjs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& VestOffsets() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetOffset(int32_t inVestAssetID, uintptr_t inTargetType) {
		return ((T (*)(AvatarEquipConfig*, int32_t, uintptr_t))(Il2CppBase() + 0x35EFD90))(this, inVestAssetID, inTargetType);
	}
	template <typename T = int32_t> T get_VestCount() {
		return ((T (*)(AvatarEquipConfig*))(Il2CppBase() + 0x35FF1CC))(this);
	}

};

}
