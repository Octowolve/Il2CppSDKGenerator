#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PowerSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PowerSwitch"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& controllledDoors() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& controlledTraps() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& controlledBuffMachines() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& OpenShow() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& OpenHide() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUsability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T get_BtnSpriteName() {
		return ((T (*)(PowerSwitch*))(Il2CppBase() + 0x1DED978))(this);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(PowerSwitch*))(Il2CppBase() + 0x1DED9F0))(this);
	}
	template <typename T = void> T OnSyncUsability(bool available) {
		return ((T (*)(PowerSwitch*, bool))(Il2CppBase() + 0x1DEDA90))(this, available);
	}
	template <typename T = void> T OnStateChanged(bool bOn) {
		return ((T (*)(PowerSwitch*, bool))(Il2CppBase() + 0x1DEDB5C))(this, bOn);
	}
	template <typename T = void> T TriggerOn() {
		return ((T (*)(PowerSwitch*))(Il2CppBase() + 0x1DEDC44))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(PowerSwitch*))(Il2CppBase() + 0x1DEDDC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncUsability(bool P0) {
		return ((T (*)(PowerSwitch*, bool))(Il2CppBase() + 0x1DEDDCC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateChanged(bool P0) {
		return ((T (*)(PowerSwitch*, bool))(Il2CppBase() + 0x1DEDDD4))(this, P0);
	}

};

}
