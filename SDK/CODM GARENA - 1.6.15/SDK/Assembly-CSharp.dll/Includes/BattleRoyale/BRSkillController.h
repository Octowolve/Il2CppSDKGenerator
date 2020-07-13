#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillController"));
	}

	template <typename T = uintptr_t> T& m_SkillView() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillLayerAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_SkillView() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B275F4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B275FC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B276A0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B2784C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B27924))(this);
	}
	template <typename T = void> T RefreshUlt() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B27A7C))(this);
	}
	template <typename T = void> T OnSkillLevelUp(uintptr_t msg) {
		return ((T (*)(BRSkillController*, uintptr_t))(Il2CppBase() + 0x1B27E7C))(this, msg);
	}
	template <typename T = void> T OnSkillLayerAdd(uintptr_t msg) {
		return ((T (*)(BRSkillController*, uintptr_t))(Il2CppBase() + 0x1B28068))(this, msg);
	}
	template <typename T = void> T OnCancelSkill(uintptr_t msg) {
		return ((T (*)(BRSkillController*, uintptr_t))(Il2CppBase() + 0x1B282B8))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B28488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B28490))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B28498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSkillController*))(Il2CppBase() + 0x1B284A0))(this);
	}

};

}
