#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class RechargeSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "RechargeSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_RechargeDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RechargeGetRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRechargeGetResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_RechargeDS() {
		return ((T (*)(RechargeSystemAssist*))(Il2CppBase() + 0x235E720))(this);
	}
	template <typename T = bool> T RechargeGetRequest() {
		return ((T (*)(RechargeSystemAssist*))(Il2CppBase() + 0x235E7D0))(this);
	}
	template <typename T = bool> T OnRechargeGetResponse(uintptr_t message) {
		return ((T (*)(RechargeSystemAssist*, uintptr_t))(Il2CppBase() + 0x235E924))(this, message);
	}

};

}
