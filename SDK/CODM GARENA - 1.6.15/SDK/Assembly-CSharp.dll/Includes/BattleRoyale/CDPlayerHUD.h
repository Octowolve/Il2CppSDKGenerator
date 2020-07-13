#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class CDPlayerHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "CDPlayerHUD"));
	}

	template <typename T = uintptr_t> T& LeftAlbumSpecular() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RightAlbumSpecular() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PreviousBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NextBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PlayBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& PauseBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& PlayBtnSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PauseBtnSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TurntableStylus() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& MusicName() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ComposerName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& bIsCDPlaying() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& AngularSpeed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DiscPlayingEffect() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> static T& m_PopUpSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_CloseSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_ClickSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPreviousMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNextMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TogglePlayBtnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDiscEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseCDPlayerHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateAlbumCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDetailedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3CEB4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3CEBC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3D0AC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3D27C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3D284))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3D294))(this);
	}
	template <typename T = void> T PlayPreviousMusic() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3D2A0))(this);
	}
	template <typename T = void> T PlayNextMusic() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3D554))(this);
	}
	template <typename T = void> T SwitchMusic(bool bIsNext) {
		return ((T (*)(CDPlayerHUD*, bool))(Il2CppBase() + 0x3D3D3AC))(this, bIsNext);
	}
	template <typename T = void> T StartMusic() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3DA60))(this);
	}
	template <typename T = void> T PlayMusic() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3DD2C))(this);
	}
	template <typename T = void> T PauseMusic() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3DB98))(this);
	}
	template <typename T = void> T TogglePlayBtnSprite(bool bIsPlaying) {
		return ((T (*)(CDPlayerHUD*, bool))(Il2CppBase() + 0x3D3DEC0))(this, bIsPlaying);
	}
	template <typename T = void> T ToggleDiscEffect(bool bIsPlaying) {
		return ((T (*)(CDPlayerHUD*, bool))(Il2CppBase() + 0x3D3E0A0))(this, bIsPlaying);
	}
	template <typename T = void> T CloseCDPlayerHUD() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3E3FC))(this);
	}
	template <typename T = bool> T GetPlayStatus() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3E6A8))(this);
	}
	template <typename T = void> T SetPlayStatus(bool bIsPlaying) {
		return ((T (*)(CDPlayerHUD*, bool))(Il2CppBase() + 0x3D3E750))(this, bIsPlaying);
	}
	template <typename T = void> T RotateAlbumCover(float dt) {
		return ((T (*)(CDPlayerHUD*, float))(Il2CppBase() + 0x3D3E810))(this, dt);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CDPlayerHUD*, float))(Il2CppBase() + 0x3D3EA30))(this, dt);
	}
	template <typename T = void> T SetDetailedInfo(Il2CppString* musicName, Il2CppString* composer) {
		return ((T (*)(CDPlayerHUD*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3D3EAF0))(this, musicName, composer);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3EC94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CDPlayerHUD*))(Il2CppBase() + 0x3D3EC9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CDPlayerHUD*, float))(Il2CppBase() + 0x3D3ECA4))(this, P0);
	}

};

}
