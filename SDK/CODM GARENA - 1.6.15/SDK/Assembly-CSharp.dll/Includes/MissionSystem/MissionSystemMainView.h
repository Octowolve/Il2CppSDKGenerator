#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class MissionSystemMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "MissionSystemMainView"));
	}

	template <typename T = uintptr_t> T& m_MissionSystemDescBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_NavTitle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_ClaimAllBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DailyTabReddotObj() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& GrowthTabReddotObj() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SubviewContainer() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MissionSystemMainView*))(Il2CppBase() + 0x32F639C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(MissionSystemMainView*))(Il2CppBase() + 0x32F6444))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MissionSystemMainView*))(Il2CppBase() + 0x32F64EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(MissionSystemMainView*))(Il2CppBase() + 0x32F64F4))(this);
	}

};

}
