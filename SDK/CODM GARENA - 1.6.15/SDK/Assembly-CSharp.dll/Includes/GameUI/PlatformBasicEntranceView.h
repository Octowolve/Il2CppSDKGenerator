#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PlatformBasicEntranceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PlatformBasicEntranceView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& entrysArr() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
