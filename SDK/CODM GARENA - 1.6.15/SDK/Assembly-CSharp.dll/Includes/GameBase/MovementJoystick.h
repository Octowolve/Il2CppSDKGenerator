#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MovementJoystick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MovementJoystick"));
	}

	template <typename T = Il2CppString*> static T& CLASSICS_MOVE_NORMAL_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CLASSICS_MOVE_DOWN_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& CLASSICS_DOWN_ALPHA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TopDirectionButton() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& joystickSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& FrontArrow() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BackArrow() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LeftArrow() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& RightArrow() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ForceUpdateWidgetList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& cachedTransform() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& DirectionButton() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& classicsWidget() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TopSprite() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LeftSprite() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RightSprite() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BottomSprite() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LeftTopArrow() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& RightTopArrow() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LeftBottomArrow() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& RightBottomArrow() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& AutoRunningSprite() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector2> T& buttonPos() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SpriteArr() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D2DD4))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D2FD8))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D2FE0))(this);
	}
	template <typename T = uintptr_t> T GetPosition() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D2FF0))(this);
	}
	template <typename T = Il2CppVector2> T GetJoyStickSize() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D30B4))(this);
	}
	template <typename T = void> T SetInputConfig() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D3208))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D32B0))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D3350))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D33F0))(this);
	}
	template <typename T = void> T UpdateArrow() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D33F8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(MovementJoystick*, float))(Il2CppBase() + 0x19D3910))(this, dt);
	}
	template <typename T = float> T GetScale() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D41E0))(this);
	}
	template <typename T = void> T InitFromConfig(uintptr_t btnConfig, uintptr_t type) {
		return ((T (*)(MovementJoystick*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D42F4))(this, btnConfig, type);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D45F4))(this);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_GetJoyStickSize() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D45FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetInputConfig() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D4610))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D4618))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(MovementJoystick*))(Il2CppBase() + 0x19D4620))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MovementJoystick*, float))(Il2CppBase() + 0x19D4628))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitFromConfig(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(MovementJoystick*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D4630))(this, P0, P1);
	}

};

}
