#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneObjectSelector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneObjectSelector"));
	}

	template <typename T = int32_t> T& m_QualityLevelMask() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Dependencies() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SceneObjectSelector*))(Il2CppBase() + 0x33E939C))(this);
	}

};

}
