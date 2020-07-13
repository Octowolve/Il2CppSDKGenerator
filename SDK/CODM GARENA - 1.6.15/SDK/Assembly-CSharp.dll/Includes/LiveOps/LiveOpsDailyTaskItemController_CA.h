#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsDailyTaskItemControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsDailyTaskItemController_CA"));
	}

	template <typename T = uintptr_t> T& m_View_CA() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_AdaptationView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_RootWidget() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsDailyTaskItemControllerCA*))(Il2CppBase() + 0x34E4698))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsDailyTaskItemControllerCA*))(Il2CppBase() + 0x34E4900))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsDailyTaskItemControllerCA*))(Il2CppBase() + 0x34E5014))(this);
	}

};

}
