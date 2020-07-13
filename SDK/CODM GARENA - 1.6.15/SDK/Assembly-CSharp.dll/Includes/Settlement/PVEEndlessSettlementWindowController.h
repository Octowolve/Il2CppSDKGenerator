#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVEEndlessSettlementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVEEndlessSettlementWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayAgainClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B29EC4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B29F68))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B2A0C8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B2A268))(this);
	}
	template <typename T = void> T OnBtnExitClick() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B2A3E4))(this);
	}
	template <typename T = void> T OnBtnPlayAgainClick() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B2A520))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B2A6A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B2A6AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B2A6B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVEEndlessSettlementWindowController*))(Il2CppBase() + 0x3B2A6BC))(this);
	}

};

}
