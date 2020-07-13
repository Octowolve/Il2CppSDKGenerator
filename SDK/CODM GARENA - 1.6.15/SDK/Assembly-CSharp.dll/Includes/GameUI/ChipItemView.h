#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ChipItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ChipItemView"));
	}

	template <typename T = uintptr_t> T& ChipSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ChipNumLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DeltaWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bUpdate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mUpdateCounter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChipNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetChipNumber(Il2CppString* num) {
		return ((T (*)(ChipItemView*, Il2CppString*))(Il2CppBase() + 0x3DDE320))(this, num);
	}
	template <typename T = void> T CheckUI() {
		return ((T (*)(ChipItemView*))(Il2CppBase() + 0x3DDE424))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ChipItemView*))(Il2CppBase() + 0x3DDE618))(this);
	}

};

}
