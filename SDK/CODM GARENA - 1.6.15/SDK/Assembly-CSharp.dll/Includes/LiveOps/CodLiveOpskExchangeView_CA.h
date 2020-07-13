#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpskExchangeViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpskExchangeView_CA"));
	}

	template <typename T = uintptr_t> T& LineTop() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LineButtom() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ExchangeScrollView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TaskDesc() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(CodLiveOpskExchangeViewCA*, uintptr_t))(Il2CppBase() + 0x3542858))(this, activity);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(CodLiveOpskExchangeViewCA*, uintptr_t))(Il2CppBase() + 0x35436F8))(this, P0);
	}

};

}
