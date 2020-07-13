#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaHitActorConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaHitActorConfig"));
	}

	template <typename T = uintptr_t> T& model() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& modelCenter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& health() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hitBox() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& hitEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& corpseLifeTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& deathAnimState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& explodeEffectId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& explodeEffectDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& explodeEffectOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& takeDamageEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuaExportProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T GetLuaExportProperty(uintptr_t propertyList) {
		return ((T (*)(LuaHitActorConfig*, uintptr_t))(Il2CppBase() + 0x4352158))(this, propertyList);
	}
	template <typename T = void> T xLuaBaseProxy_GetLuaExportProperty(uintptr_t P0) {
		return ((T (*)(LuaHitActorConfig*, uintptr_t))(Il2CppBase() + 0x4352A58))(this, P0);
	}

};

}
