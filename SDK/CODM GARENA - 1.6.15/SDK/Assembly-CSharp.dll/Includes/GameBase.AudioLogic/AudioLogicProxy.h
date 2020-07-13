#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class AudioLogicProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "AudioLogicProxy"));
	}

	template <typename T = uintptr_t> static T& mMatineePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& mCurMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& mIsInLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& mCmdDetect3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& mCmdUpdateObstruction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& mVBSSCtrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadResFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMatineeAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMatineeAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckIfDetect3PSpotted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnLoadingToLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnLoadingToGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IsZMMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> static T SendEvent(uintptr_t whichCate, uint32_t uiEventID, Il2CppArray<uintptr_t>* inParams) {
		return ((T (*)(void *, uintptr_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B949B4))(0, whichCate, uiEventID, inParams);
	}
	template <typename T = void> static T Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B94B38))(0);
	}
	template <typename T = void> static T StartLoading(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B9532C))(0, mapID);
	}
	template <typename T = void> static T EndLoading(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B96454))(0, mapID);
	}
	template <typename T = void> static T LoadResFor(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B96568))(0, mapID);
	}
	template <typename T = void> static T PlayMatineeAudio(Il2CppString* strMatineeName, uintptr_t goTargetObj) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3B9667C))(0, strMatineeName, goTargetObj);
	}
	template <typename T = void> static T StopMatineeAudio(Il2CppString* strMatineeName, uintptr_t goTargetObj) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3B96A08))(0, strMatineeName, goTargetObj);
	}
	template <typename T = bool> static T _CheckIfDetect3PSpotted() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B9517C))(0);
	}
	template <typename T = void> static T _OnLoadingToLobby() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B95810))(0);
	}
	template <typename T = void> static T _OnLoadingToGame(uintptr_t eMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B95C1C))(0, eMode);
	}
	template <typename T = bool> static T _IsZMMode(uintptr_t pGameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B96D94))(0, pGameMode);
	}

};

}
