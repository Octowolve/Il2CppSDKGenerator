#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementExpDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementExpDetailController"));
	}

	template <typename T = int32_t> static T& PanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Tasks() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MP1_Init_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_PVPSettlementExpDetailController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T T_MP1_Init_3() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B456DC))(this);
	}
	template <typename T = void> T T_PVPSettlementExpDetailController_Go() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B458AC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B45E5C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B45F30))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B46008))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B460E0))(this);
	}
	template <typename T = void> T T_MP1_Init_3m__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(PVPSettlementExpDetailController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B46230))(this, tutorialType, info);
	}
	template <typename T = void> static T T_PVPSettlementExpDetailController_Gom__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B465D8))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B46718))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B46720))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B46728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPSettlementExpDetailController*))(Il2CppBase() + 0x3B46730))(this);
	}

};

}
