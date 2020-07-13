#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadingSceneTipsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadingSceneTipsView"));
	}

	template <typename T = uintptr_t> T& m_TipsLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetTipsContent(Il2CppString* content) {
		return ((T (*)(LoadingSceneTipsView*, Il2CppString*))(Il2CppBase() + 0x2340E04))(this, content);
	}
	template <typename T = void> T SetContent(Il2CppString* content) {
		return ((T (*)(LoadingSceneTipsView*, Il2CppString*))(Il2CppBase() + 0x2340FAC))(this, content);
	}

};

}
