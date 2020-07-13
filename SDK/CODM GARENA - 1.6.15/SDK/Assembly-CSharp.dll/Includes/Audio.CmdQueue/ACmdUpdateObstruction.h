#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.CmdQueue {

class ACmdUpdateObstruction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.CmdQueue", "ACmdUpdateObstruction"));
	}

	template <typename T = float> T& mAbsDetecTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& mDetectSpan() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mIsFinished() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsSaw() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& mFoundSniper() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mListAllImpacts() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mWaitDisappearStageFoundSniper() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uint32_t>*> T& mListAllPlayers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mCurStage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_SBDebugOutput() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> static T& DrawDebugRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kDetectHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& kDetectWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& kDetectMaxRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& UseMultiCast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoOperation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CachePlayerIDStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetectStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RetrieveAllPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PerformDetection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ShouldPerformDetection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0___PerformDetection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestIfCanSee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestIfCanSeeUsing2Ray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestIfCanSeeUseMultiCast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoFinalStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__DrawDebugRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__DrawDebugRayUsing2Ray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__DrawDebugRayUsingMultiCast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__DrawBaseLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Reset(float fDetectTime) {
		return ((T (*)(ACmdUpdateObstruction*, float))(Il2CppBase() + 0x44D4EEC))(this, fDetectTime);
	}
	template <typename T = Il2CppString*> T get_DebugDescription() {
		return ((T (*)(ACmdUpdateObstruction*))(Il2CppBase() + 0x44D5018))(this);
	}
	template <typename T = uintptr_t> T DoOperation() {
		return ((T (*)(ACmdUpdateObstruction*))(Il2CppBase() + 0x44D51A0))(this);
	}
	template <typename T = void> T CachePlayerIDStage() {
		return ((T (*)(ACmdUpdateObstruction*))(Il2CppBase() + 0x44D52C8))(this);
	}
	template <typename T = void> T DetectStage() {
		return ((T (*)(ACmdUpdateObstruction*))(Il2CppBase() + 0x44D5430))(this);
	}
	template <typename T = void> T RetrieveAllPlayerID() {
		return ((T (*)(ACmdUpdateObstruction*))(Il2CppBase() + 0x44D56F8))(this);
	}
	template <typename T = bool> T _PerformDetection(uintptr_t pLP, uint32_t iPlayerID, bool IsUsingLegacy) {
		return ((T (*)(ACmdUpdateObstruction*, uintptr_t, uint32_t, bool))(Il2CppBase() + 0x44D5B80))(this, pLP, iPlayerID, IsUsingLegacy);
	}
	template <typename T = bool> T _ShouldPerformDetection(uintptr_t pLP, uintptr_t pTarget, uint32_t iPlayerID) {
		return ((T (*)(ACmdUpdateObstruction*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x44D5D14))(this, pLP, pTarget, iPlayerID);
	}
	template <typename T = int32_t> T __PerformDetection(uintptr_t pLP, uintptr_t pTarget, uintptr_t* isHit, bool IsUsingLegacy) {
		return ((T (*)(ACmdUpdateObstruction*, uintptr_t, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x44D6078))(this, pLP, pTarget, isHit, IsUsingLegacy);
	}
	template <typename T = int32_t> T TestIfCanSee(uintptr_t pLP, uintptr_t pTarget, uintptr_t* bRayCastResult) {
		return ((T (*)(ACmdUpdateObstruction*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x44D6A3C))(this, pLP, pTarget, bRayCastResult);
	}
	template <typename T = int32_t> T TestIfCanSeeUsing2Ray(uintptr_t pLP, uintptr_t pTarget, uintptr_t* bRayCastResult) {
		return ((T (*)(ACmdUpdateObstruction*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x44D7038))(this, pLP, pTarget, bRayCastResult);
	}
	template <typename T = int32_t> T TestIfCanSeeUseMultiCast(uintptr_t pLP, uintptr_t pTarget, uintptr_t* bRayCastResult) {
		return ((T (*)(ACmdUpdateObstruction*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x44D61FC))(this, pLP, pTarget, bRayCastResult);
	}
	template <typename T = void> T Term() {
		return ((T (*)(ACmdUpdateObstruction*))(Il2CppBase() + 0x44D780C))(this);
	}
	template <typename T = void> T GotoFinalStage() {
		return ((T (*)(ACmdUpdateObstruction*))(Il2CppBase() + 0x44D5A90))(this);
	}
	template <typename T = void> T _DrawDebugRay(uint32_t iPlayerID, bool isCanBeSeen) {
		return ((T (*)(ACmdUpdateObstruction*, uint32_t, bool))(Il2CppBase() + 0x44D78E0))(this, iPlayerID, isCanBeSeen);
	}
	template <typename T = void> T _DrawDebugRayUsing2Ray(uint32_t iPlayerID, bool isCanBeSeen) {
		return ((T (*)(ACmdUpdateObstruction*, uint32_t, bool))(Il2CppBase() + 0x44D8230))(this, iPlayerID, isCanBeSeen);
	}
	template <typename T = void> T _DrawDebugRayUsingMultiCast(uint32_t iPlayerID, bool isCanBeSeen) {
		return ((T (*)(ACmdUpdateObstruction*, uint32_t, bool))(Il2CppBase() + 0x44D8CC0))(this, iPlayerID, isCanBeSeen);
	}
	template <typename T = void> T _DrawBaseLine(uintptr_t pLP, uintptr_t pTarget, bool isCanBeSeen) {
		return ((T (*)(ACmdUpdateObstruction*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x44D7E4C))(this, pLP, pTarget, isCanBeSeen);
	}
	template <typename T = bool> T get_Finished() {
		return ((T (*)(ACmdUpdateObstruction*))(Il2CppBase() + 0x44D956C))(this);
	}

};

}
