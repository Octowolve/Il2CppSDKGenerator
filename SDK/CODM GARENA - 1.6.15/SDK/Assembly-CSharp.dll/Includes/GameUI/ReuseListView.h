#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReuseListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReuseListView"));
	}

	template <typename T = uintptr_t> T& m_WrapContent() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitReuseList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitReuseList(uintptr_t scrollView, uintptr_t dataSource) {
		return ((T (*)(ReuseListView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AC7DD4))(this, scrollView, dataSource);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ReuseListView*))(Il2CppBase() + 0x3ACCC6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ReuseListView*))(Il2CppBase() + 0x3ACCD14))(this);
	}

};

}
