#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CallingCardShowSceneView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CallingCardShowSceneView"));
	}

	template <typename T = uintptr_t> T& cardTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}