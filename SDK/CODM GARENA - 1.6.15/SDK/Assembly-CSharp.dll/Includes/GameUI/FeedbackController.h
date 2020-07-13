#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class FeedbackController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "FeedbackController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FeedbackController*))(Il2CppBase() + 0x470D8F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FeedbackController*))(Il2CppBase() + 0x470D99C))(this);
	}
	template <typename T = void> T SetResult(uintptr_t result) {
		return ((T (*)(FeedbackController*, uintptr_t))(Il2CppBase() + 0x470DAF4))(this, result);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FeedbackController*))(Il2CppBase() + 0x470DCD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FeedbackController*))(Il2CppBase() + 0x470DCDC))(this);
	}

};

}
