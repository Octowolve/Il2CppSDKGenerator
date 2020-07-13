#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DestructibleSceneObjectInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DestructibleSceneObjectInfoHUD"));
	}

	template <typename T = uintptr_t> T& destructibleSceneObjectInfo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_GameUIScene() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DestructibleSceneObjectInfoList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t uiScene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x40E30B4))(0, uiScene);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DestructibleSceneObjectInfoHUD*))(Il2CppBase() + 0x40E31D4))(this);
	}
	template <typename T = void> T Add(uintptr_t sceneObject) {
		return ((T (*)(DestructibleSceneObjectInfoHUD*, uintptr_t))(Il2CppBase() + 0x40E32B8))(this, sceneObject);
	}
	template <typename T = uintptr_t> T Spawn(uintptr_t sceneObject) {
		return ((T (*)(DestructibleSceneObjectInfoHUD*, uintptr_t))(Il2CppBase() + 0x40E3454))(this, sceneObject);
	}
	template <typename T = void> T Remove(uintptr_t sceneObject) {
		return ((T (*)(DestructibleSceneObjectInfoHUD*, uintptr_t))(Il2CppBase() + 0x40E378C))(this, sceneObject);
	}
	template <typename T = void> T UpdateAll(float dt) {
		return ((T (*)(DestructibleSceneObjectInfoHUD*, float))(Il2CppBase() + 0x40E394C))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(DestructibleSceneObjectInfoHUD*))(Il2CppBase() + 0x40E3CD4))(this);
	}

};

}
