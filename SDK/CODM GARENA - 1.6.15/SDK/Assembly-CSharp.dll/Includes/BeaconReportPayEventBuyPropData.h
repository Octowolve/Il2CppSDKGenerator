#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BeaconReportPayEventBuyPropData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeaconReportPayEventBuyPropData"));
	}

	template <typename T = Il2CppString*> T& BuyPropWay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& BuyPropResult() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& BuyPropCostTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(BeaconReportPayEventBuyPropData*))(Il2CppBase() + 0x373EC90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetData() {
		return ((T (*)(BeaconReportPayEventBuyPropData*))(Il2CppBase() + 0x373ED6C))(this);
	}

};

}
