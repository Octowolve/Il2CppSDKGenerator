#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScrollTemplateAItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScrollTemplateAItem"));
	}

	template <typename T = int32_t> T& SeqId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& DisplayIcon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ColorId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColorSubId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& FixIcon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Number() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColoreID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetColoreID(int32_t itemId, bool isDisplayIcon) {
		return ((T (*)(ScrollTemplateAItem*, int32_t, bool))(Il2CppBase() + 0x44825DC))(this, itemId, isDisplayIcon);
	}

};

}
