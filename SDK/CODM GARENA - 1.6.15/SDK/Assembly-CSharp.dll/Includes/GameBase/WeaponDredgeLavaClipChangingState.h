#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponDredgeLavaClipChangingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponDredgeLavaClipChangingState"));
	}

	template <typename T = uintptr_t> T& mState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_CurFireComponent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_HideMeshStartTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_HideMeshEndTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_SetSkillTrigger() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsHidingMesh() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = float> static T& m_HideMeshStartRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_HidemeshEndRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClipPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRequestChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReloadDoneStateType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRenderersActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ChangeClipPhase(uintptr_t state) {
		return ((T (*)(WeaponDredgeLavaClipChangingState*, uintptr_t))(Il2CppBase() + 0x1C647A8))(this, state);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponDredgeLavaClipChangingState*))(Il2CppBase() + 0x1C6496C))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponDredgeLavaClipChangingState*))(Il2CppBase() + 0x1C64D18))(this);
	}
	template <typename T = void> T DoRequestChangeClip() {
		return ((T (*)(WeaponDredgeLavaClipChangingState*))(Il2CppBase() + 0x1C65048))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponDredgeLavaClipChangingState*, float))(Il2CppBase() + 0x1C65124))(this, DeltaTime);
	}
	template <typename T = uintptr_t> T GetReloadDoneStateType() {
		return ((T (*)(WeaponDredgeLavaClipChangingState*))(Il2CppBase() + 0x1C652D8))(this);
	}
	template <typename T = void> T SetRenderersActive(Il2CppList<uintptr_t>* m_Renderers, bool value) {
		return ((T (*)(WeaponDredgeLavaClipChangingState*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x1C64EF0))(this, m_Renderers, value);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponDredgeLavaClipChangingState*))(Il2CppBase() + 0x1C65384))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponDredgeLavaClipChangingState*))(Il2CppBase() + 0x1C6538C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoRequestChangeClip() {
		return ((T (*)(WeaponDredgeLavaClipChangingState*))(Il2CppBase() + 0x1C65394))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponDredgeLavaClipChangingState*, float))(Il2CppBase() + 0x1C6539C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetReloadDoneStateType() {
		return ((T (*)(WeaponDredgeLavaClipChangingState*))(Il2CppBase() + 0x1C653A4))(this);
	}

};

}
