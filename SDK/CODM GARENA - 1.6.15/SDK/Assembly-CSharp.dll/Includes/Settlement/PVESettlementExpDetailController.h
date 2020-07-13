#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementExpDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementExpDetailController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Tasks() {
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVESettlementExpDetailController*))(Il2CppBase() + 0x3B333F0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVESettlementExpDetailController*))(Il2CppBase() + 0x3B33494))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVESettlementExpDetailController*))(Il2CppBase() + 0x3B3353C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVESettlementExpDetailController*))(Il2CppBase() + 0x3B335E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVESettlementExpDetailController*))(Il2CppBase() + 0x3B336F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVESettlementExpDetailController*))(Il2CppBase() + 0x3B336F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVESettlementExpDetailController*))(Il2CppBase() + 0x3B33700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVESettlementExpDetailController*))(Il2CppBase() + 0x3B33708))(this);
	}

};

}
