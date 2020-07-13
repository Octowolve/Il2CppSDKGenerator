#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class LockSteper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "LockSteper"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T add_StateChangedEvent(uintptr_t value) {
		return ((T (*)(LockSteper*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_StateChangedEvent(uintptr_t value) {
		return ((T (*)(LockSteper*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_BroadcastEvent(uintptr_t value) {
		return ((T (*)(LockSteper*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_BroadcastEvent(uintptr_t value) {
		return ((T (*)(LockSteper*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(LockSteper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_HasLogined() {
		return ((T (*)(LockSteper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_HasStarted() {
		return ((T (*)(LockSteper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetStatus() {
		return ((T (*)(LockSteper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Initialize(uintptr_t initInfo) {
		return ((T (*)(LockSteper*, uintptr_t))(Il2CppBase() + 0x0))(this, initInfo);
	}
	template <typename T = void> T Login(Il2CppArray<uintptr_t>* accessInfo, uintptr_t callback) {
		return ((T (*)(LockSteper*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, accessInfo, callback);
	}
	template <typename T = void> T Logout(uintptr_t callback) {
		return ((T (*)(LockSteper*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T Ready(uintptr_t callback) {
		return ((T (*)(LockSteper*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = bool> T ReconnectManually() {
		return ((T (*)(LockSteper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Input(Il2CppArray<uintptr_t>* data, bool rawUdp, uintptr_t flag) {
		return ((T (*)(LockSteper*, Il2CppArray<uintptr_t>*, bool, uintptr_t))(Il2CppBase() + 0x0))(this, data, rawUdp, flag);
	}
	template <typename T = bool> T Input_1(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, uintptr_t flag) {
		return ((T (*)(LockSteper*, Il2CppArray<uintptr_t>*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x0))(this, data, len, rawUdp, flag);
	}
	template <typename T = uintptr_t> T PopFrame() {
		return ((T (*)(LockSteper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T ReadFrame(uintptr_t frame) {
		return ((T (*)(LockSteper*, uintptr_t))(Il2CppBase() + 0x0))(this, frame);
	}
	template <typename T = bool> T SendBroadcast(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, uintptr_t flag) {
		return ((T (*)(LockSteper*, Il2CppArray<uintptr_t>*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x0))(this, data, len, rawUdp, flag);
	}
	template <typename T = int32_t> T GetCurrentMaxFrameId() {
		return ((T (*)(LockSteper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetStartFrame(int32_t frameId) {
		return ((T (*)(LockSteper*, int32_t))(Il2CppBase() + 0x0))(this, frameId);
	}
	template <typename T = void> T GetSpeed(uintptr_t udp, uintptr_t tcp) {
		return ((T (*)(LockSteper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, udp, tcp);
	}
	template <typename T = bool> T SetUserData(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(LockSteper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T NotifyLoadingBegin() {
		return ((T (*)(LockSteper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T NotifyLoadingEnd() {
		return ((T (*)(LockSteper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x46ACB38))(0);
	}

};

}
