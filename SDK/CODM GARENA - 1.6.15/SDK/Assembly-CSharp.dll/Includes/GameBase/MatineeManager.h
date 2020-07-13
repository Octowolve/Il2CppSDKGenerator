#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatineeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatineeManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& MatineeSequenceList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DelayUnloadAssetList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayingSequenceList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAutoPlayMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableAllSequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMatineeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadMatineeComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkipCurrentCutScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanShowCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCutScenePlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDisableProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDisablePlayerCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldHideDynamicObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentCutScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSequencePlayFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReference() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCutSceneFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCutSceneStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableVirtualCam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatineeSequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetMatineeSequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C4870))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C4C58))(this);
	}
	template <typename T = void> T StartAutoPlayMatinee() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C4D08))(this);
	}
	template <typename T = void> T DisableAllSequence() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C4920))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C52F8))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C53C0))(this);
	}
	template <typename T = void> T PlaySequence(uintptr_t seq, uintptr_t finishCallback, float playbackRate, bool isReset, float resetTime, float blendInTime) {
		return ((T (*)(MatineeManager*, uintptr_t, uintptr_t, float, bool, float, float))(Il2CppBase() + 0x19C54AC))(this, seq, finishCallback, playbackRate, isReset, resetTime, blendInTime);
	}
	template <typename T = void> T PlayMatineeSound(uintptr_t seq) {
		return ((T (*)(MatineeManager*, uintptr_t))(Il2CppBase() + 0x19C5798))(this, seq);
	}
	template <typename T = void> T OnLoadMatineeComplete(int32_t assetID, uintptr_t assetObj) {
		return ((T (*)(MatineeManager*, int32_t, uintptr_t))(Il2CppBase() + 0x19C590C))(this, assetID, assetObj);
	}
	template <typename T = bool> T PlayMatinee(Il2CppString* matineeName, uintptr_t finishCallback, float playbackRate, bool isReset, float resetTime, float blendInTime) {
		return ((T (*)(MatineeManager*, Il2CppString*, uintptr_t, float, bool, float, float))(Il2CppBase() + 0x19C4EE4))(this, matineeName, finishCallback, playbackRate, isReset, resetTime, blendInTime);
	}
	template <typename T = void> T SkipCurrentCutScene(bool forceSkip) {
		return ((T (*)(MatineeManager*, bool))(Il2CppBase() + 0x19C5F28))(this, forceSkip);
	}
	template <typename T = bool> T CanShowCrossHair() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C6174))(this);
	}
	template <typename T = bool> T IsCutScenePlaying() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C6300))(this);
	}
	template <typename T = bool> T IsDisableProtocol() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C6458))(this);
	}
	template <typename T = bool> T IsDisablePlayerCamera() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C65B0))(this);
	}
	template <typename T = bool> T ShouldHideDynamicObject() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C6708))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentCutScene() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C6860))(this);
	}
	template <typename T = void> T OnSequencePlayFinished(uintptr_t sequence) {
		return ((T (*)(MatineeManager*, uintptr_t))(Il2CppBase() + 0x19C6A84))(this, sequence);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C70DC))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(MatineeManager*, float))(Il2CppBase() + 0x19C70E4))(this, fDeltaTime);
	}
	template <typename T = bool> T CheckReference(uintptr_t inObj, uintptr_t excludeSeq) {
		return ((T (*)(MatineeManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19C73F4))(this, inObj, excludeSeq);
	}
	template <typename T = void> T OnCutSceneFinished(uintptr_t seq) {
		return ((T (*)(MatineeManager*, uintptr_t))(Il2CppBase() + 0x19C7930))(this, seq);
	}
	template <typename T = void> T OnCutSceneStarted(uintptr_t seq, float blendInTime) {
		return ((T (*)(MatineeManager*, uintptr_t, float))(Il2CppBase() + 0x19C8410))(this, seq, blendInTime);
	}
	template <typename T = void> T DisableVirtualCam(uintptr_t virtualCam) {
		return ((T (*)(MatineeManager*, uintptr_t))(Il2CppBase() + 0x19C9180))(this, virtualCam);
	}
	template <typename T = uintptr_t> T GetMatineeSequence(Il2CppString* sequenceName) {
		return ((T (*)(MatineeManager*, Il2CppString*))(Il2CppBase() + 0x19C5D14))(this, sequenceName);
	}
	template <typename T = uintptr_t> T GetMatineeSequence_1(uintptr_t sequence) {
		return ((T (*)(MatineeManager*, uintptr_t))(Il2CppBase() + 0x19C6F6C))(this, sequence);
	}
	template <typename T = bool> static T CanShowCrossHairm__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19C92D0))(0, e);
	}
	template <typename T = bool> static T IsCutScenePlayingm__1(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19C9314))(0, e);
	}
	template <typename T = bool> static T IsDisableProtocolm__2(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19C9358))(0, e);
	}
	template <typename T = bool> static T IsDisablePlayerCameram__3(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19C9378))(0, e);
	}
	template <typename T = bool> static T ShouldHideDynamicObjectm__4(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19C9398))(0, e);
	}
	template <typename T = bool> static T GetCurrentCutScenem__5(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19C93DC))(0, e);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C93FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C9404))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C940C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(MatineeManager*))(Il2CppBase() + 0x19C9414))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MatineeManager*, float))(Il2CppBase() + 0x19C941C))(this, P0);
	}

};

}
