#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CODCrossHair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "COD_CrossHair"));
	}

	template <typename T = uintptr_t> T& m_SpriteCenter() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteLeft() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteRight() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpriteUp() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SpriteDown() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_CrosshairSize() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_CrosshairLength() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_LastCrossHairLength() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_LastCrossHairSize() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& ChangeTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& IsCrosshairChange() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& Rate() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector3> T& mUpSourcePos() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& mDownSourcePos() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& mLeftSourcePos() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& mRightSourcePos() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNGUILayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCrosshairColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCrosshairSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PositionChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickUpdateCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCrosshairPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(CODCrossHair*, bool))(Il2CppBase() + 0x3C78CB0))(this, visible);
	}
	template <typename T = void> T SetNGUILayer(int32_t layer) {
		return ((T (*)(CODCrossHair*, int32_t))(Il2CppBase() + 0x3C78ED0))(this, layer);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CODCrossHair*))(Il2CppBase() + 0x3C790A0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CODCrossHair*, float))(Il2CppBase() + 0x3C790A8))(this, dt);
	}
	template <typename T = void> T UpdateCrosshairColor(uintptr_t color) {
		return ((T (*)(CODCrossHair*, uintptr_t))(Il2CppBase() + 0x3C79704))(this, color);
	}
	template <typename T = void> T UpdateCrosshairSize(uintptr_t weapon) {
		return ((T (*)(CODCrossHair*, uintptr_t))(Il2CppBase() + 0x3C799A8))(this, weapon);
	}
	template <typename T = void> T PositionChange(uintptr_t go, Il2CppVector3 source, Il2CppVector3 target) {
		return ((T (*)(CODCrossHair*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3C79D1C))(this, go, source, target);
	}
	template <typename T = void> T TickUpdateCrossHair(float dt) {
		return ((T (*)(CODCrossHair*, float))(Il2CppBase() + 0x3C7960C))(this, dt);
	}
	template <typename T = void> T UpdateCrosshairPos() {
		return ((T (*)(CODCrossHair*))(Il2CppBase() + 0x3C79E54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CODCrossHair*, float))(Il2CppBase() + 0x3C7A28C))(this, P0);
	}

};

}
