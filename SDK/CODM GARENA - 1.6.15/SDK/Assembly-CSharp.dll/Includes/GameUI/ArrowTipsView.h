#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ArrowTipsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ArrowTipsView"));
	}

	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Arrow() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent(Il2CppString* label, Il2CppVector3 labelOffset, float angle) {
		return ((T (*)(ArrowTipsView*, Il2CppString*, Il2CppVector3, float))(Il2CppBase() + 0x2D63664))(this, label, labelOffset, angle);
	}

};

}
