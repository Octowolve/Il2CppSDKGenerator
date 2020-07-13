#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RechargeAwardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RechargeAwardItem"));
	}

	template <typename T = int32_t> T& levelId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& levelNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& awardId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& awardNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& awardExpireTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}


};

}
