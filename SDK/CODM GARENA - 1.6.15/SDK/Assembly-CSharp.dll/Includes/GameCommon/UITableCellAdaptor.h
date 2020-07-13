#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UITableCellAdaptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UITableCellAdaptor"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Childs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AdaptCell(int32_t newWidth) {
		return ((T (*)(UITableCellAdaptor*, int32_t))(Il2CppBase() + 0x49FF310))(this, newWidth);
	}
	template <typename T = Il2CppVector3> T GetPos(uintptr_t widget, float percent) {
		return ((T (*)(UITableCellAdaptor*, uintptr_t, float))(Il2CppBase() + 0x49FF6D0))(this, widget, percent);
	}
	template <typename T = float> T GetPercent(uintptr_t container, uintptr_t child, int32_t oldWidth) {
		return ((T (*)(UITableCellAdaptor*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x49FF56C))(this, container, child, oldWidth);
	}

};

}
