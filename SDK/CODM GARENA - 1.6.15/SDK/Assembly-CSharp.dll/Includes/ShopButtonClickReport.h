#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShopButtonClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShopButtonClickReport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(ShopButtonClickReport*))(Il2CppBase() + 0x495A384))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(int32_t ButtonID, uint32_t GoodID, Il2CppString* productID, int32_t showArea, int32_t page, Il2CppString* LimitOfferSkipType, int32_t skipParam) {
		return ((T (*)(ShopButtonClickReport*, int32_t, uint32_t, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x495A3FC))(this, ButtonID, GoodID, productID, showArea, page, LimitOfferSkipType, skipParam);
	}

};

}
