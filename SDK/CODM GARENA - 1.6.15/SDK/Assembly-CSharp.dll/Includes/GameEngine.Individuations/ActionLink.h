#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class ActionLink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "ActionLink"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& actions() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& keyName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
