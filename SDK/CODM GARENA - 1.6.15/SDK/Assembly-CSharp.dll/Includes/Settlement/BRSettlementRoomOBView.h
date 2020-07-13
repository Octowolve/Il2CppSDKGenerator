#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRoomOBView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRoomOBView"));
	}

	template <typename T = uintptr_t> T& Match() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BtnExit() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ExitLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_RemainShowExitTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& timer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshShowExitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(BRSettlementRoomOBView*))(Il2CppBase() + 0x3C349B8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSettlementRoomOBView*))(Il2CppBase() + 0x3C34A54))(this);
	}
	template <typename T = void> T RefreshShowExitTime() {
		return ((T (*)(BRSettlementRoomOBView*))(Il2CppBase() + 0x3C34BD0))(this);
	}
	template <typename T = void> T OnBtnExitClick() {
		return ((T (*)(BRSettlementRoomOBView*))(Il2CppBase() + 0x3C2BAF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSettlementRoomOBView*))(Il2CppBase() + 0x3C34D78))(this);
	}

};

}
