#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SceneGuiTempRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SceneGuiTempRoot"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& mOriginalChildren() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckChildrenTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SceneGuiTempRoot*))(Il2CppBase() + 0x2DF7494))(this);
	}
	template <typename T = void> T AddChild(uintptr_t ui) {
		return ((T (*)(SceneGuiTempRoot*, uintptr_t))(Il2CppBase() + 0x2DF655C))(this, ui);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SceneGuiTempRoot*))(Il2CppBase() + 0x2DF75E8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SceneGuiTempRoot*))(Il2CppBase() + 0x2DF7794))(this);
	}
	template <typename T = void> T CheckChildrenTransform() {
		return ((T (*)(SceneGuiTempRoot*))(Il2CppBase() + 0x2DF7940))(this);
	}

};

}
