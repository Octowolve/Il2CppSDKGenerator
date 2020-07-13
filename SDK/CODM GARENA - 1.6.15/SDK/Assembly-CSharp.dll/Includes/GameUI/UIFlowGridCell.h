#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlowGridCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlowGridCell"));
	}

	template <typename T = uintptr_t> T& Path() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& onSelectCell() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UIFlowGridCell*))(Il2CppBase() + 0x3AE2088))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIFlowGridCell*))(Il2CppBase() + 0x3AE2184))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UIFlowGridCell*))(Il2CppBase() + 0x3AE2234))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIFlowGridCell*))(Il2CppBase() + 0x3AE2350))(this);
	}

};

}
