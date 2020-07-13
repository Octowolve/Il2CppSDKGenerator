#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDetailEquipBtnClickcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnDetailEquipBtnClick>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& itemType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& subType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& itemId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& itemGuid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnDetailEquipBtnClickcAnonStorey0*))(Il2CppBase() + 0x1AA996C))(this);
	}

};

}
