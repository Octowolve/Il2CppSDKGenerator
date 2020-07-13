#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SceneGui
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SceneGui"));
	}

	template <typename T = Il2CppVector3> T& mOriginalLocalPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppQuaternion> T& mOriginalLocalRotation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& mOriginalLocalScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& bDontMove() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveToRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF5B34))(this);
	}
	template <typename T = void> T DoEnable() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF5EEC))(this);
	}
	template <typename T = void> T DoDisable() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF6028))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF6164))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF62D4))(this);
	}
	template <typename T = void> T AddToParent() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF5D30))(this);
	}
	template <typename T = void> T MoveToRoot() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF621C))(this);
	}
	template <typename T = void> T ResetTransform() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF69EC))(this);
	}
	template <typename T = void> T ProcessParent() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF663C))(this);
	}
	template <typename T = void> T ProcessSelf() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF68A4))(this);
	}
	template <typename T = void> T CreateInEditor() {
		return ((T (*)(SceneGui*))(Il2CppBase() + 0x2DF5C98))(this);
	}

};

}
