#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DanceFloorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DanceFloorManager"));
	}

	template <typename T = uintptr_t> T& CDPlayerInstance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_DanceFloorObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& DanceFloorAudioComp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& DanceFloorInteractiveArea() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& DanceAnimController() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SubComponents() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& DanceFloorTimer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NotifyPlayMusicEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCDPlayerPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPawnInsideVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlayMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncCDStatusToSubComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCDStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCDStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDanceInteractionHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDanceAnimationCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSubComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterSubComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMusicEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MusicEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DanceFloorManager*))(Il2CppBase() + 0x3D439E0))(this);
	}
	template <typename T = bool> T IsCDPlayerPlaying() {
		return ((T (*)(DanceFloorManager*))(Il2CppBase() + 0x3D3D944))(this);
	}
	template <typename T = bool> T IsLocalPawnInsideVolume() {
		return ((T (*)(DanceFloorManager*))(Il2CppBase() + 0x3D43F40))(this);
	}
	template <typename T = void> T StartPlayMusic(bool bStart, bool bForceToPlayFromStart) {
		return ((T (*)(DanceFloorManager*, bool, bool))(Il2CppBase() + 0x3D3E2A4))(this, bStart, bForceToPlayFromStart);
	}
	template <typename T = void> T SwitchMusic(bool bPlayNextOne) {
		return ((T (*)(DanceFloorManager*, bool))(Il2CppBase() + 0x3D3D660))(this, bPlayNextOne);
	}
	template <typename T = void> T SyncCDStatusToSubComponent(uintptr_t subComponent) {
		return ((T (*)(DanceFloorManager*, uintptr_t))(Il2CppBase() + 0x3D441CC))(this, subComponent);
	}
	template <typename T = void> T SetCDStatus(uint32_t inStatus) {
		return ((T (*)(DanceFloorManager*, uint32_t))(Il2CppBase() + 0x3D44378))(this, inStatus);
	}
	template <typename T = uint32_t> T GetCDStatus() {
		return ((T (*)(DanceFloorManager*))(Il2CppBase() + 0x3D44064))(this);
	}
	template <typename T = void> T CheckDanceInteractionHUD() {
		return ((T (*)(DanceFloorManager*))(Il2CppBase() + 0x3D3D798))(this);
	}
	template <typename T = void> T OnDanceAnimationCompleted(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(DanceFloorManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3D44680))(this, args);
	}
	template <typename T = void> T RegisterSubComponent(uintptr_t subComponent) {
		return ((T (*)(DanceFloorManager*, uintptr_t))(Il2CppBase() + 0x3D44738))(this, subComponent);
	}
	template <typename T = void> T UnRegisterSubComponent(uintptr_t subComponent) {
		return ((T (*)(DanceFloorManager*, uintptr_t))(Il2CppBase() + 0x3D44874))(this, subComponent);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DanceFloorManager*, float))(Il2CppBase() + 0x3D4498C))(this, deltaTime);
	}
	template <typename T = void> T OnMusicEnd(bool bStartplay, int32_t index, float elapseTime) {
		return ((T (*)(DanceFloorManager*, bool, int32_t, float))(Il2CppBase() + 0x3D44BE0))(this, bStartplay, index, elapseTime);
	}
	template <typename T = void> T MusicEnd() {
		return ((T (*)(DanceFloorManager*))(Il2CppBase() + 0x3D44DF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DanceFloorManager*))(Il2CppBase() + 0x3D44E9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DanceFloorManager*, float))(Il2CppBase() + 0x3D44EA4))(this, P0);
	}

};

}
