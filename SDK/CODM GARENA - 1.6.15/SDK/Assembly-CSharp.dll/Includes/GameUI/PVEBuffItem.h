#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVEBuffItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVEBuffItem"));
	}

	template <typename T = uintptr_t> T& BuffIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BuffLayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& SkillBuff() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent(uintptr_t conf) {
		return ((T (*)(PVEBuffItem*, uintptr_t))(Il2CppBase() + 0x3A9ED64))(this, conf);
	}

};

}
