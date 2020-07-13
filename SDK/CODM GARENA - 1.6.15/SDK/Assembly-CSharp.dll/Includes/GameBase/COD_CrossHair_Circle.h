#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CODCrossHairCircle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "COD_CrossHair_Circle"));
	}

	template <typename T = float> T& m_InitSize() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& m_LocalScaleCache() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppVector3> T& m_UpLocalPositionCache() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppVector3> T& m_DownLocalPositionCache() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppVector3> T& m_LeftLocalPositionCache() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector3> T& m_RightLocalPositionCache() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RejustTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCrosshairSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCrosshairPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnChanged(uintptr_t Msg) {
		return ((T (*)(CODCrossHairCircle*, uintptr_t))(Il2CppBase() + 0x3C7A3DC))(this, Msg);
	}
	template <typename T = void> T RejustTransform() {
		return ((T (*)(CODCrossHairCircle*))(Il2CppBase() + 0x3C7AA6C))(this);
	}
	template <typename T = void> T UpdateCrosshairSize(uintptr_t weapon) {
		return ((T (*)(CODCrossHairCircle*, uintptr_t))(Il2CppBase() + 0x3C7ACFC))(this, weapon);
	}
	template <typename T = void> T UpdateCrosshairPos() {
		return ((T (*)(CODCrossHairCircle*))(Il2CppBase() + 0x3C7AF40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnChanged(uintptr_t P0) {
		return ((T (*)(CODCrossHairCircle*, uintptr_t))(Il2CppBase() + 0x3C7AFE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCrosshairSize(uintptr_t P0) {
		return ((T (*)(CODCrossHairCircle*, uintptr_t))(Il2CppBase() + 0x3C7AFEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCrosshairPos() {
		return ((T (*)(CODCrossHairCircle*))(Il2CppBase() + 0x3C7AFF0))(this);
	}

};

}
