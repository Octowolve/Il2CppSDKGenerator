#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssistSettingParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssistSettingParam"));
	}

	template <typename T = float> T& m_MagnAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_DampAssitAimRateFactor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_AutoAssistAimRates() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T get_MagnAssitAimRateFactor() {
		return ((T (*)(AssistSettingParam*))(Il2CppBase() + 0x35CBB20))(this);
	}
	template <typename T = void> T set_MagnAssitAimRateFactor(float value) {
		return ((T (*)(AssistSettingParam*, float))(Il2CppBase() + 0x35CBB28))(this, value);
	}
	template <typename T = float> T get_DampAssitAimRateFactor() {
		return ((T (*)(AssistSettingParam*))(Il2CppBase() + 0x35CBC2C))(this);
	}
	template <typename T = void> T set_DampAssitAimRateFactor(float value) {
		return ((T (*)(AssistSettingParam*, float))(Il2CppBase() + 0x35CBC34))(this, value);
	}
	template <typename T = float> T get_AutoAssistAimRates() {
		return ((T (*)(AssistSettingParam*))(Il2CppBase() + 0x35CBD38))(this);
	}
	template <typename T = void> T set_AutoAssistAimRates(float value) {
		return ((T (*)(AssistSettingParam*, float))(Il2CppBase() + 0x35CBD40))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AssistSettingParam*))(Il2CppBase() + 0x35CBE44))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AssistSettingParam*))(Il2CppBase() + 0x35CBF04))(this);
	}

};

}
