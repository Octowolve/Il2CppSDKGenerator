#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class ZmMpSettlementCardNewWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "ZmMpSettlementCardNewWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ZmMpSettlementCardNewWindowController*))(Il2CppBase() + 0x2989F80))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ZmMpSettlementCardNewWindowController*))(Il2CppBase() + 0x298A184))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZmMpSettlementCardNewWindowController*))(Il2CppBase() + 0x298A228))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZmMpSettlementCardNewWindowController*))(Il2CppBase() + 0x298A37C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t res) {
		return ((T (*)(ZmMpSettlementCardNewWindowController*, uintptr_t))(Il2CppBase() + 0x298A498))(this, res);
	}
	template <typename T = void> T OnBtnExitClick() {
		return ((T (*)(ZmMpSettlementCardNewWindowController*))(Il2CppBase() + 0x298A878))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ZmMpSettlementCardNewWindowController*))(Il2CppBase() + 0x298AB8C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ZmMpSettlementCardNewWindowController*))(Il2CppBase() + 0x298AB94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZmMpSettlementCardNewWindowController*))(Il2CppBase() + 0x298AB9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZmMpSettlementCardNewWindowController*))(Il2CppBase() + 0x298ABA4))(this);
	}

};

}
