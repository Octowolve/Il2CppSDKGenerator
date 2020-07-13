#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMLoadingHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMLoadingHUD"));
	}

	template <typename T = uintptr_t> T& MapTexture() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LevelName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LevelNo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMainStoryLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateMainStoryLine(int32_t mapId) {
		return ((T (*)(ZMLoadingHUD*, int32_t))(Il2CppBase() + 0x2A57A20))(this, mapId);
	}

};

}
