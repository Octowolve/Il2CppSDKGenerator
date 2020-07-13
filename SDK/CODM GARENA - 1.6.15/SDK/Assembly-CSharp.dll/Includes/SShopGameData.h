#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SShopGameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SShopGameData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& SShopDataList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(SShopGameData*))(Il2CppBase() + 0x394E664))(this);
	}

};

}
