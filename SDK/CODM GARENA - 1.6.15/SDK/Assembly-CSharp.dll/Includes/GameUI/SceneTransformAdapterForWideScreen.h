#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SceneTransformAdapterForWideScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SceneTransformAdapterForWideScreen"));
	}

	template <typename T = Il2CppVector3> T& TargetPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& TargetRotation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SceneTransformAdapterForWideScreen*))(Il2CppBase() + 0x44756F0))(this);
	}
	template <typename T = void> T CheckTransform() {
		return ((T (*)(SceneTransformAdapterForWideScreen*))(Il2CppBase() + 0x44757D8))(this);
	}

};

}
