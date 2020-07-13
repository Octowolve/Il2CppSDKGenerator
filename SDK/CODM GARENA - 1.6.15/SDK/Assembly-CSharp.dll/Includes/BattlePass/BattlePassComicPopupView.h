#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassComicPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassComicPopupView"));
	}

	template <typename T = uintptr_t> T& ComicSeq() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ComicTexture() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& DownLoading() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& spriteZoom() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetComicPopupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetComicStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetComicPopupData(uintptr_t ComicData) {
		return ((T (*)(BattlePassComicPopupView*, uintptr_t))(Il2CppBase() + 0x327F478))(this, ComicData);
	}
	template <typename T = void> T SetComicStates(bool successful, uintptr_t code) {
		return ((T (*)(BattlePassComicPopupView*, bool, uintptr_t))(Il2CppBase() + 0x327F32C))(this, successful, code);
	}

};

}
