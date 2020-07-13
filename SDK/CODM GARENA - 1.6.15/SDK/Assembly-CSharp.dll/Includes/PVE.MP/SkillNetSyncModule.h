#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SkillNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SkillNetSyncModule"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& latestSkillStepInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvSkillData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayedUpdateSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(SkillNetSyncModule*))(Il2CppBase() + 0x4359604))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SkillNetSyncModule*))(Il2CppBase() + 0x4359714))(this);
	}
	template <typename T = void> T OnRecvSkillData(uintptr_t Msg) {
		return ((T (*)(SkillNetSyncModule*, uintptr_t))(Il2CppBase() + 0x4359808))(this, Msg);
	}
	template <typename T = void> T DelayedUpdateSkill() {
		return ((T (*)(SkillNetSyncModule*))(Il2CppBase() + 0x435A7AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(SkillNetSyncModule*))(Il2CppBase() + 0x435A938))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SkillNetSyncModule*))(Il2CppBase() + 0x435A940))(this);
	}

};

}
