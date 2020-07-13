#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class QualitySettingDisplayView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "QualitySettingDisplayView"));
	}

	template <typename T = uintptr_t> T& m_Label() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabelText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateLabelText(Il2CppString* str) {
		return ((T (*)(QualitySettingDisplayView*, Il2CppString*))(Il2CppBase() + 0x252FB3C))(this, str);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(QualitySettingDisplayView*, bool))(Il2CppBase() + 0x252FD24))(this, pause);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(QualitySettingDisplayView*, bool))(Il2CppBase() + 0x252FDC4))(this, P0);
	}

};

}
