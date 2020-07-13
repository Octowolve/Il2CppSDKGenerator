#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectPickUpBulletFromEnemyCorpse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_PickUpBulletFromEnemyCorpse"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleShowPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectPickUpBulletFromEnemyCorpse*))(Il2CppBase() + 0x375D56C))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectPickUpBulletFromEnemyCorpse*))(Il2CppBase() + 0x375D8D4))(this);
	}
	template <typename T = void> T HandleShowPickUp(bool show) {
		return ((T (*)(BuffEffectPickUpBulletFromEnemyCorpse*, bool))(Il2CppBase() + 0x375D6CC))(this, show);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectPickUpBulletFromEnemyCorpse*))(Il2CppBase() + 0x375DB08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectPickUpBulletFromEnemyCorpse*))(Il2CppBase() + 0x375DB0C))(this);
	}

};

}
