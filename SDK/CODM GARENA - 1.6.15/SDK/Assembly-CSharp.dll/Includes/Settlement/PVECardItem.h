#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVECardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVECardItem"));
	}

	template <typename T = uintptr_t> T& SpriteQualityIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ballAnimator() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& cardAnimator() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SpriteChipBG() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& chipNum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVECardBgSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVECardIconSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetData(int32_t itemId, int32_t num, int32_t time) {
		return ((T (*)(PVECardItem*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3B29174))(this, itemId, num, time);
	}
	template <typename T = Il2CppString*> T GetPVECardBgSpriteName(int32_t color) {
		return ((T (*)(PVECardItem*, int32_t))(Il2CppBase() + 0x3B2949C))(this, color);
	}
	template <typename T = Il2CppString*> T GetPVECardIconSpriteName(int32_t color) {
		return ((T (*)(PVECardItem*, int32_t))(Il2CppBase() + 0x3B295E8))(this, color);
	}

};

}
