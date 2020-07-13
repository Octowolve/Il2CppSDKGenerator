#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRTeamMateWantedItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRTeamMateWantedItem"));
	}

	template <typename T = uintptr_t> T& Sprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent(int32_t itemId) {
		return ((T (*)(BRTeamMateWantedItem*, int32_t))(Il2CppBase() + 0x3DD5888))(this, itemId);
	}

};

}
