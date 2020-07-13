#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffectGroup"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_AssetEffectDic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAssetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(AssetEffectGroup*))(Il2CppBase() + 0x3B904F8))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(AssetEffectGroup*, bool))(Il2CppBase() + 0x3B90500))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(AssetEffectGroup*))(Il2CppBase() + 0x3B90508))(this);
	}
	template <typename T = void> T AddAssetEffect(uintptr_t type, uintptr_t effect) {
		return ((T (*)(AssetEffectGroup*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B9078C))(this, type, effect);
	}
	template <typename T = bool> T ContainKey(uintptr_t type) {
		return ((T (*)(AssetEffectGroup*, uintptr_t))(Il2CppBase() + 0x3B908C4))(this, type);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AssetEffectGroup*, float))(Il2CppBase() + 0x3B909A4))(this, deltaTime);
	}
	template <typename T = void> T EndEffect() {
		return ((T (*)(AssetEffectGroup*))(Il2CppBase() + 0x3B90BA8))(this);
	}

};

}
