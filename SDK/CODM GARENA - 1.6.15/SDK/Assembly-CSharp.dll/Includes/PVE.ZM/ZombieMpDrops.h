#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieMpDrops
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieMpDrops"));
	}

	template <typename T = int32_t> T& InstanceId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& LeftRewardsNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ResetRewardsNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ResetTimeStamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
