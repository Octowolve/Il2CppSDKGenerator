#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class VehicleDroneTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "VehicleDroneTips"));
	}

	template <typename T = uintptr_t> T& TipsLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& TweenDuration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_TweenAlpha() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_HideCoroutine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_FinishedCoroutine() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayAndHideCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTweenFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetTipsLabel(Il2CppString* tips) {
		return ((T (*)(VehicleDroneTips*, Il2CppString*))(Il2CppBase() + 0x3D9CDB0))(this, tips);
	}
	template <typename T = void> T ShowTips(Il2CppString* tipsContent, float visibleTime) {
		return ((T (*)(VehicleDroneTips*, Il2CppString*, float))(Il2CppBase() + 0x3D9CEA4))(this, tipsContent, visibleTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(VehicleDroneTips*))(Il2CppBase() + 0x3D9D150))(this);
	}
	template <typename T = uintptr_t> T DelayAndHideCommonTips(float delay) {
		return ((T (*)(VehicleDroneTips*, float))(Il2CppBase() + 0x3D9D054))(this, delay);
	}
	template <typename T = uintptr_t> T OnTweenFinished(float delay) {
		return ((T (*)(VehicleDroneTips*, float))(Il2CppBase() + 0x3D9D220))(this, delay);
	}

};

}
