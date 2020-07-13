#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRTeamMateDetailItemDescItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRTeamMateDetailItem_DescItem"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BRTeamMateDetailItemDescItem*))(Il2CppBase() + 0x3DD2F88))(this);
	}
	template <typename T = void> T SetContent(int32_t itemId) {
		return ((T (*)(BRTeamMateDetailItemDescItem*, int32_t))(Il2CppBase() + 0x3DD0E7C))(this, itemId);
	}
	template <typename T = void> T OnItemPress(uintptr_t obj, bool bPress) {
		return ((T (*)(BRTeamMateDetailItemDescItem*, uintptr_t, bool))(Il2CppBase() + 0x3DD30A4))(this, obj, bPress);
	}

};

}
