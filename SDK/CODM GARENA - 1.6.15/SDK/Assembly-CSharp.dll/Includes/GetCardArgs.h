#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetCardArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetCardArgs"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& GUID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& itemCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& spi() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isMust() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isFirstWin() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& isUpgradable() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& isLiveOpsEvent() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = bool> T& isRepeated() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
