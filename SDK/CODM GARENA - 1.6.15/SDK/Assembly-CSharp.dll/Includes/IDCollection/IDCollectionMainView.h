#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IDCollection {

class IDCollectionMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IDCollection", "IDCollectionMainView"));
	}

	template <typename T = uintptr_t> T& viewContainer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& lineSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RootWidget() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setTabInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedDotState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T setTabInfo(int32_t nTabIndex, uintptr_t tabType) {
		return ((T (*)(IDCollectionMainView*, int32_t, uintptr_t))(Il2CppBase() + 0x4F25690))(this, nTabIndex, tabType);
	}
	template <typename T = void> T SetRedDotState(int32_t nTabIndex, bool bInRedDot) {
		return ((T (*)(IDCollectionMainView*, int32_t, bool))(Il2CppBase() + 0x4F25C04))(this, nTabIndex, bInRedDot);
	}

};

}
