#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Settings {

class OberseverFunctionButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Settings", "OberseverFunctionButton"));
	}

	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Arrow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
