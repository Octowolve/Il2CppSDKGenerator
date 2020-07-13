#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WorkShop {

class WorkShopSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WorkShop", "WorkShopSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqWorkShopConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetWorkShopConfigRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ReqWorkShopConfig() {
		return ((T (*)(WorkShopSystemAssist*))(Il2CppBase() + 0xC17A58))(this);
	}
	template <typename T = bool> T OnGetWorkShopConfigRes(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(WorkShopSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0xC17B84))(this, message, errStr);
	}

};

}
