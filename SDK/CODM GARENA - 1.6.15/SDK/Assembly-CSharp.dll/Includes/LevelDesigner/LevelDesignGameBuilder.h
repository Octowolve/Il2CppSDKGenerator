#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LevelDesigner {

class LevelDesignGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelDesigner", "LevelDesignGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(LevelDesignGameBuilder*))(Il2CppBase() + 0x4931F30))(this);
	}

};

}
