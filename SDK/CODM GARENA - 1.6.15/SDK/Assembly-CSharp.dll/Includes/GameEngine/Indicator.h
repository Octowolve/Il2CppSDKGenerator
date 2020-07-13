#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Indicator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Indicator"));
	}

	template <typename T = Il2CppVector3> T& m_IndicatorOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_IndicatorSpriteName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_IndicatorDisplayElapseTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_IndicatorDisplayTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_ShouldHideIndicator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_IndicatorType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppVector3> T get_IndicatorOffset() {
		return ((T (*)(Indicator*))(Il2CppBase() + 0x3703A28))(this);
	}
	template <typename T = void> T set_IndicatorOffset(Il2CppVector3 value) {
		return ((T (*)(Indicator*, Il2CppVector3))(Il2CppBase() + 0x3703A3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_IndicatorSpriteName() {
		return ((T (*)(Indicator*))(Il2CppBase() + 0x3703A48))(this);
	}
	template <typename T = void> T set_IndicatorSpriteName(Il2CppString* value) {
		return ((T (*)(Indicator*, Il2CppString*))(Il2CppBase() + 0x3703A50))(this, value);
	}
	template <typename T = float> T get_IndicatorDisplayElapseTime() {
		return ((T (*)(Indicator*))(Il2CppBase() + 0x3703A58))(this);
	}
	template <typename T = void> T set_IndicatorDisplayElapseTime(float value) {
		return ((T (*)(Indicator*, float))(Il2CppBase() + 0x3703A60))(this, value);
	}
	template <typename T = float> T get_IndicatorDisplayTime() {
		return ((T (*)(Indicator*))(Il2CppBase() + 0x3703A68))(this);
	}
	template <typename T = bool> T get_ShouldHideIndicator() {
		return ((T (*)(Indicator*))(Il2CppBase() + 0x3703A70))(this);
	}
	template <typename T = void> T set_ShouldHideIndicator(bool value) {
		return ((T (*)(Indicator*, bool))(Il2CppBase() + 0x3703A78))(this, value);
	}
	template <typename T = uintptr_t> T get_IndicatorType() {
		return ((T (*)(Indicator*))(Il2CppBase() + 0x3703A80))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(Indicator*))(Il2CppBase() + 0x3703A88))(this);
	}

};

}
