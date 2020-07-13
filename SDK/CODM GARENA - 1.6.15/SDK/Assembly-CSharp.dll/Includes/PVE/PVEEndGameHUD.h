#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEEndGameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEEndGameHUD"));
	}

	template <typename T = uintptr_t> T& WinResult() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FailResult() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RoundResult() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& RoundResultLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReturnFrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(PVEEndGameHUD*))(Il2CppBase() + 0x438A520))(this);
	}
	template <typename T = void> T ShowEndGameInfo() {
		return ((T (*)(PVEEndGameHUD*))(Il2CppBase() + 0x438A5BC))(this);
	}
	template <typename T = void> T ReturnFrontEnd() {
		return ((T (*)(PVEEndGameHUD*))(Il2CppBase() + 0x438AA9C))(this);
	}

};

}
