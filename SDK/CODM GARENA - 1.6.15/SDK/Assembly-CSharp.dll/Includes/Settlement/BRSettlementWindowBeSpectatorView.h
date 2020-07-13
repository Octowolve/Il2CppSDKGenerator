#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementWindowBeSpectatorView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementWindowBeSpectatorView"));
	}

	template <typename T = uintptr_t> T& LabelSurviveNum() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelTotalNum() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelSlogan() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelObserve() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnObserve() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BtnQuit() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSurviveNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSlogan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRSettlementWindowBeSpectatorView*))(Il2CppBase() + 0x3C365C8))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRSettlementWindowBeSpectatorView*))(Il2CppBase() + 0x3C365D0))(this);
	}
	template <typename T = void> T SetSurviveNum() {
		return ((T (*)(BRSettlementWindowBeSpectatorView*))(Il2CppBase() + 0x3C36120))(this);
	}
	template <typename T = void> T SetSlogan() {
		return ((T (*)(BRSettlementWindowBeSpectatorView*))(Il2CppBase() + 0x3C36400))(this);
	}

};

}
