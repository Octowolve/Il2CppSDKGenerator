#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonItemTimeoutView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonItemTimeoutView"));
	}

	template <typename T = uintptr_t> T& TimeoutStaticView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& StaticGrid() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& StaticItemList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TimeoutScorllView() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LoadoutBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& OkBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UICommonItemTimeoutView*))(Il2CppBase() + 0x29DB40C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(UICommonItemTimeoutView*))(Il2CppBase() + 0x29DB4F4))(this);
	}

};

}
