#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace tss {

class TssInfoPublisher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "tss", "TssInfoPublisher"));
	}

	template <typename T = int32_t> static T& TSS_INFO_TYPE_DETECT_RESULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TSS_INFO_TYPE_HEARTBEAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mSingletonLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& padlockReceiver() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& mReceivers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& mTssInfoPublisherThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& mTssInfoPublisherThreadStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_registTssInfoReceiver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_broadcastInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_recvDataThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_openPipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_closePipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_recvPipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> static T getInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x496ACBC))(0);
	}
	template <typename T = void> T registTssInfoReceiver(uintptr_t receiver) {
		return ((T (*)(TssInfoPublisher*, uintptr_t))(Il2CppBase() + 0x496AF90))(this, receiver);
	}
	template <typename T = void> T broadcastInfo(int32_t id, Il2CppString* info) {
		return ((T (*)(TssInfoPublisher*, int32_t, Il2CppString*))(Il2CppBase() + 0x496B388))(this, id, info);
	}
	template <typename T = void> T recvDataThread() {
		return ((T (*)(TssInfoPublisher*))(Il2CppBase() + 0x496B704))(this);
	}
	template <typename T = int32_t> static T openPipe() {
		return ((T (*)(void *))(Il2CppBase() + 0x496BA68))(0);
	}
	template <typename T = void> static T closePipe() {
		return ((T (*)(void *))(Il2CppBase() + 0x496BCF0))(0);
	}
	template <typename T = Il2CppString*> static T recvPipe() {
		return ((T (*)(void *))(Il2CppBase() + 0x496BC04))(0);
	}

};

}
