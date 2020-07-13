#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PerkMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PerkMachine"));
	}

	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& perkConfigs() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& currentPerkConfig() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& currentMeshRenderder() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_PerkId() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& spriteOffset() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& Invoke_AnimPlayRandom() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& Invoke_RepeatTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& Invoke_RepeatTimeSum() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyInteractiveContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectPerkModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimPlayRandom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimConfirmModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAlreadyGetPerk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = int32_t> T get_PerkId() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2743F10))(this);
	}
	template <typename T = bool> T get_IsVisible() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2743F18))(this);
	}
	template <typename T = float> T get_BtnSpriteScale() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2743FFC))(this);
	}
	template <typename T = Il2CppVector3> T get_BtnSpriteOffset() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2744004))(this);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2744018))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x27440B8))(this);
	}
	template <typename T = void> T NotifyInteractiveContext(bool show) {
		return ((T (*)(PerkMachine*, bool))(Il2CppBase() + 0x2744160))(this, show);
	}
	template <typename T = void> T SelectPerkModel(int32_t perkid) {
		return ((T (*)(PerkMachine*, int32_t))(Il2CppBase() + 0x2744350))(this, perkid);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2744B60))(this);
	}
	template <typename T = void> T AnimPlayRandom() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2744CC0))(this);
	}
	template <typename T = void> T AnimConfirmModel(int32_t perkid) {
		return ((T (*)(PerkMachine*, int32_t))(Il2CppBase() + 0x2744688))(this, perkid);
	}
	template <typename T = bool> T NeedCheckBeforeInteractive() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2744E54))(this);
	}
	template <typename T = bool> T OnCheckBeforeInteractive() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2744EF4))(this);
	}
	template <typename T = bool> T HasAlreadyGetPerk() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x274543C))(this);
	}
	template <typename T = bool> T HasAlreadyGetPerkm__0(uintptr_t it) {
		return ((T (*)(PerkMachine*, uintptr_t))(Il2CppBase() + 0x27455C8))(this, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x274560C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2745614))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyInteractiveContext(bool P0) {
		return ((T (*)(PerkMachine*, bool))(Il2CppBase() + 0x274561C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCheckBeforeInteractive() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x2745624))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnCheckBeforeInteractive() {
		return ((T (*)(PerkMachine*))(Il2CppBase() + 0x274562C))(this);
	}

};

}
