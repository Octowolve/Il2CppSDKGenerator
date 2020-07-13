#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NuclearBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NuclearBomb"));
	}

	template <typename T = uintptr_t> T& m_BloomParam() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Style() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SmokeEffect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_ShowingBloomEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_BeginBloomTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LastSetBloomIntensityTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_BeginBloomIntensity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_EndBloomIntensity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_BeginBloomThreshold() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_EndBloomThreshold() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& INCREASE_INTENSITY_DURATION() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& KEEP_INTENSITY_DURATION() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBloomEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideBloomEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Update() {
		return ((T (*)(NuclearBomb*))(Il2CppBase() + 0x19DCD10))(this);
	}
	template <typename T = void> T ShowBloomEffect() {
		return ((T (*)(NuclearBomb*))(Il2CppBase() + 0x19DD04C))(this);
	}
	template <typename T = void> T HideBloomEffect() {
		return ((T (*)(NuclearBomb*))(Il2CppBase() + 0x19DCF30))(this);
	}
	template <typename T = void> T ShowSmokeEffect() {
		return ((T (*)(NuclearBomb*))(Il2CppBase() + 0x19DD2B4))(this);
	}
	template <typename T = void> T HideSmokeEffect() {
		return ((T (*)(NuclearBomb*))(Il2CppBase() + 0x19DD674))(this);
	}
	template <typename T = void> T HideEffect() {
		return ((T (*)(NuclearBomb*))(Il2CppBase() + 0x19DD798))(this);
	}

};

}
