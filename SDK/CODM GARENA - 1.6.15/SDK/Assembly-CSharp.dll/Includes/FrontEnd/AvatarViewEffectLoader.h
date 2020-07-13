#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarViewEffectLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarViewEffectLoader"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& EffectAssetArray() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EffectParentObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadEffectsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(AvatarViewEffectLoader*))(Il2CppBase() + 0x28F86F8))(this);
	}
	template <typename T = void> T LoadEffects() {
		return ((T (*)(AvatarViewEffectLoader*))(Il2CppBase() + 0x28F879C))(this);
	}
	template <typename T = void> T OnLoadEffectsFinish(Il2CppArray<uintptr_t>* assetList, uintptr_t obj) {
		return ((T (*)(AvatarViewEffectLoader*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28F8918))(this, assetList, obj);
	}

};

}
