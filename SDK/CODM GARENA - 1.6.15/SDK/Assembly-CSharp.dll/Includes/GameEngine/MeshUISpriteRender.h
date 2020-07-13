#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MeshUISpriteRender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MeshUISpriteRender"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Setup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Setup(uintptr_t rawMat, uintptr_t rawMesh, Il2CppString* sprintName) {
		return ((T (*)(MeshUISpriteRender*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2709028))(this, rawMat, rawMesh, sprintName);
	}

};

}
