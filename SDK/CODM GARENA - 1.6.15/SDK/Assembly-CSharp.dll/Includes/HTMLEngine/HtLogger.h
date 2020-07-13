#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class HtLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "HtLogger"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Log(uintptr_t level, Il2CppString* message) {
		return ((T (*)(HtLogger*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, level, message);
	}

};

}
