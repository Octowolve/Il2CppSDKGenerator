#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementExpDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementExpDetailController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tasks() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C217E0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C21884))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C2192C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C219D4))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C21AE0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C21BEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C21BF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C21BFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C21C04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(BRSettlementExpDetailController*))(Il2CppBase() + 0x3C21C0C))(this);
	}

};

}
