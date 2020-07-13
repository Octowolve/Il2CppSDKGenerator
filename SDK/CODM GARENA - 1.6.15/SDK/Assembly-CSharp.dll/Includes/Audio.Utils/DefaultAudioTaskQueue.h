#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class DefaultAudioTaskQueue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "DefaultAudioTaskQueue"));
	}

	template <typename T = int32_t> T& MAX_PROCESS_TASK_PER_TICK() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mCurCmds() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& mToRemoveIdxs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mLastProcessCnt() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mLstProcIdx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueueUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillInDebugString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginProcessCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContinueProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DefaultAudioTaskQueue*))(Il2CppBase() + 0x4509DC0))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(DefaultAudioTaskQueue*))(Il2CppBase() + 0x4509E58))(this);
	}
	template <typename T = void> T QueueUp(uintptr_t pCmd) {
		return ((T (*)(DefaultAudioTaskQueue*, uintptr_t))(Il2CppBase() + 0x4509EF0))(this, pCmd);
	}
	template <typename T = void> T DeQueue(uintptr_t pCmd) {
		return ((T (*)(DefaultAudioTaskQueue*, uintptr_t))(Il2CppBase() + 0x4509FD8))(this, pCmd);
	}
	template <typename T = void> T FillInDebugString(uintptr_t sbContent) {
		return ((T (*)(DefaultAudioTaskQueue*, uintptr_t))(Il2CppBase() + 0x450A0C0))(this, sbContent);
	}
	template <typename T = void> T ProcessCmd() {
		return ((T (*)(DefaultAudioTaskQueue*))(Il2CppBase() + 0x450A44C))(this);
	}
	template <typename T = void> T BeginProcessCmd() {
		return ((T (*)(DefaultAudioTaskQueue*))(Il2CppBase() + 0x450A848))(this);
	}
	template <typename T = bool> T IsContinueProcess() {
		return ((T (*)(DefaultAudioTaskQueue*))(Il2CppBase() + 0x450A8E0))(this);
	}

};

}
