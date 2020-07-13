#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassTaskExplainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassTaskExplainController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& EnableAdapt() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptRemoveLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E218))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E2BC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E3D0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E478))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E520))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E5C8))(this);
	}
	template <typename T = void> T AdaptRemoveLabel() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E6E8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E97C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E98C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E99C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassTaskExplainController*))(Il2CppBase() + 0x2C3E9A4))(this);
	}

};

}
