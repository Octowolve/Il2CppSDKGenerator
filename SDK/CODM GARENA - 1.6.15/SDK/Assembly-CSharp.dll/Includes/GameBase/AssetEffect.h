#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect"));
	}

	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreInRecover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T PreLoadEffectAsset(uintptr_t type, Il2CppString* value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3B80A64))(0, type, value);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B810FC))(0, type);
	}
	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B81BE0))(this, value, isStart, target);
	}
	template <typename T = bool> T IgnoreInRecover() {
		return ((T (*)(AssetEffect*))(Il2CppBase() + 0x3B81C9C))(this);
	}
	template <typename T = void> T SetServerData(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AssetEffect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B81D3C))(this, args);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(AssetEffect*))(Il2CppBase() + 0x3B81DDC))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(AssetEffect*, bool))(Il2CppBase() + 0x3B81DE4))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(AssetEffect*))(Il2CppBase() + 0x3B81DEC))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AssetEffect*, float))(Il2CppBase() + 0x3B81E84))(this, deltaTime);
	}

};

}
