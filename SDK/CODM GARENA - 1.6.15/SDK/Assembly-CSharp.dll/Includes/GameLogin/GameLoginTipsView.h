#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class GameLoginTipsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "GameLoginTipsView"));
	}

	template <typename T = uintptr_t> T& TipsLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
