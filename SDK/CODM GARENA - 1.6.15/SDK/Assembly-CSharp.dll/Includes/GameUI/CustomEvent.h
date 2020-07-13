#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CustomEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CustomEvent"));
	}

	template <typename T = uintptr_t> T& tag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& BeginTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
