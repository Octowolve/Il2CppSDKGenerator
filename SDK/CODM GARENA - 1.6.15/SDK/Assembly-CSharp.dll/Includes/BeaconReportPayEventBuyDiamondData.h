#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BeaconReportPayEventBuyDiamondData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeaconReportPayEventBuyDiamondData"));
	}

	template <typename T = Il2CppString*> T& PayTypeResult() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& CallbackResult() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ApolloStage() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& TheApolloResult() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& EachStageCostTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(BeaconReportPayEventBuyDiamondData*))(Il2CppBase() + 0x373EAE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetData() {
		return ((T (*)(BeaconReportPayEventBuyDiamondData*))(Il2CppBase() + 0x373EBC8))(this);
	}

};

}
