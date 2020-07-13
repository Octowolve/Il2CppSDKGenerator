#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.CmdQueue {

class ACmdDetect3PPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.CmdQueue", "ACmdDetect3PPawn"));
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
	template <typename T = bool> T& mWaitDisappearStageFoundSniper() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = Il2CppList<uint32_t>*> T& mListAllPlayers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mCurStage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_SBDebugOutput() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoOperation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CachePlayerIDStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__DrawDebugRay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DetectStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecideSniperStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitForDisappearStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RetrieveAllPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestIfCanSee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoFinalStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Reset(float fDetectTime) {
		return ((T (*)(ACmdDetect3PPawn*, float))(Il2CppBase() + 0x44D31C0))(this, fDetectTime);
	}
	template <typename T = Il2CppString*> T get_DebugDescription() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D32BC))(this);
	}
	template <typename T = uintptr_t> T DoOperation() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D3444))(this);
	}
	template <typename T = void> T CachePlayerIDStage() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D3578))(this);
	}
	template <typename T = void> T _DrawDebugRay(uint32_t iPlayerID) {
		return ((T (*)(ACmdDetect3PPawn*, uint32_t))(Il2CppBase() + 0x44D4214))(this, iPlayerID);
	}
	template <typename T = void> T DetectStage() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D36B0))(this);
	}
	template <typename T = void> T DecideSniperStage() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D386C))(this);
	}
	template <typename T = void> T WaitForDisappearStage() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D3B54))(this);
	}
	template <typename T = void> T RetrieveAllPlayerID() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D3EAC))(this);
	}
	template <typename T = int32_t> T TestIfCanSee(uint32_t uPlayerID) {
		return ((T (*)(ACmdDetect3PPawn*, uint32_t))(Il2CppBase() + 0x44D4734))(this, uPlayerID);
	}
	template <typename T = void> T GotoFinalStage() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D4674))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D4CFC))(this);
	}
	template <typename T = bool> T get_Finished() {
		return ((T (*)(ACmdDetect3PPawn*))(Il2CppBase() + 0x44D4DA0))(this);
	}

};

}
