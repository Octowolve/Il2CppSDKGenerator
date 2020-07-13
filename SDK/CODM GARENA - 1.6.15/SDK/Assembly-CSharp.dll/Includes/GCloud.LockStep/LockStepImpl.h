#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class LockStepImpl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "LockStepImpl"));
	}

	template <typename T = uintptr_t> T& initInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& bufferStrategy() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& StateChangedEvent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& BroadcastEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& recvBuffer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& hasReady() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& loginEventHandler() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& logoutEventHandler() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& readyEventHandler() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_StateChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_StateChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_BroadcastEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_BroadcastEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Login() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Logout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendBroadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Input() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Input() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Ready() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReconnectManually() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Seek() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentMaxFrameId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStartFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUserData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLoadingBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyLoadingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogoutProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReadyProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBroadcastProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvedFrameProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChangedProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = void> T add_StateChangedEvent(uintptr_t value) {
		return ((T (*)(LockStepImpl*, uintptr_t))(Il2CppBase() + 0x46ACDFC))(this, value);
	}
	template <typename T = void> T remove_StateChangedEvent(uintptr_t value) {
		return ((T (*)(LockStepImpl*, uintptr_t))(Il2CppBase() + 0x46ACFF4))(this, value);
	}
	template <typename T = void> T add_BroadcastEvent(uintptr_t value) {
		return ((T (*)(LockStepImpl*, uintptr_t))(Il2CppBase() + 0x46AD1EC))(this, value);
	}
	template <typename T = void> T remove_BroadcastEvent(uintptr_t value) {
		return ((T (*)(LockStepImpl*, uintptr_t))(Il2CppBase() + 0x46AD3E4))(this, value);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(LockStepImpl*))(Il2CppBase() + 0x46AD5DC))(this);
	}
	template <typename T = bool> T get_HasLogined() {
		return ((T (*)(LockStepImpl*))(Il2CppBase() + 0x46AD6B0))(this);
	}
	template <typename T = bool> T get_HasStarted() {
		return ((T (*)(LockStepImpl*))(Il2CppBase() + 0x46AD78C))(this);
	}
	template <typename T = uintptr_t> T GetStatus() {
		return ((T (*)(LockStepImpl*))(Il2CppBase() + 0x46AD868))(this);
	}
	template <typename T = bool> T Initialize(uintptr_t initInfo) {
		return ((T (*)(LockStepImpl*, uintptr_t))(Il2CppBase() + 0x46AD9D8))(this, initInfo);
	}
	template <typename T = bool> T Initialize_1(uintptr_t initInfo, uintptr_t bufferStrategy) {
		return ((T (*)(LockStepImpl*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46ADAA0))(this, initInfo, bufferStrategy);
	}
	template <typename T = void> T Login(Il2CppArray<uintptr_t>* accessInfo, uintptr_t callback) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46ADDA4))(this, accessInfo, callback);
	}
	template <typename T = void> T Logout(uintptr_t callback) {
		return ((T (*)(LockStepImpl*, uintptr_t))(Il2CppBase() + 0x46ADF70))(this, callback);
	}
	template <typename T = bool> T SendBroadcast(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, uintptr_t flag) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x46AE0EC))(this, data, len, rawUdp, flag);
	}
	template <typename T = bool> T SendToServer(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x46AE2DC))(this, data, len, rawUdp);
	}
	template <typename T = bool> T Input(Il2CppArray<uintptr_t>* data, bool rawUdp, uintptr_t flag) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*, bool, uintptr_t))(Il2CppBase() + 0x46AE4C0))(this, data, rawUdp, flag);
	}
	template <typename T = bool> T Input_1(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, uintptr_t flag) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x46AE5A8))(this, data, len, rawUdp, flag);
	}
	template <typename T = bool> T Write(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, uintptr_t flag) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x46AE70C))(this, data, len, rawUdp, flag);
	}
	template <typename T = uintptr_t> T PopFrame() {
		return ((T (*)(LockStepImpl*))(Il2CppBase() + 0x46AE910))(this);
	}
	template <typename T = bool> T ReadFrame(uintptr_t frame) {
		return ((T (*)(LockStepImpl*, uintptr_t))(Il2CppBase() + 0x46AEA44))(this, frame);
	}
	template <typename T = void> T Ready(uintptr_t callback) {
		return ((T (*)(LockStepImpl*, uintptr_t))(Il2CppBase() + 0x46AECD0))(this, callback);
	}
	template <typename T = bool> T ReconnectManually() {
		return ((T (*)(LockStepImpl*))(Il2CppBase() + 0x46AEE54))(this);
	}
	template <typename T = void> T Seek(int32_t start, int32_t count, int32_t frameIntervalMs) {
		return ((T (*)(LockStepImpl*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x46AEFCC))(this, start, count, frameIntervalMs);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(LockStepImpl*, float))(Il2CppBase() + 0x46AF190))(this, deltaTime);
	}
	template <typename T = int32_t> T GetCurrentMaxFrameId() {
		return ((T (*)(LockStepImpl*))(Il2CppBase() + 0x46AF3B8))(this);
	}
	template <typename T = void> T SetStartFrame(int32_t frameId) {
		return ((T (*)(LockStepImpl*, int32_t))(Il2CppBase() + 0x46AF528))(this, frameId);
	}
	template <typename T = void> T GetSpeed(uintptr_t udp, uintptr_t tcp) {
		return ((T (*)(LockStepImpl*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46AF6B4))(this, udp, tcp);
	}
	template <typename T = bool> T SetUserData(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(LockStepImpl*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46AF864))(this, key, value);
	}
	template <typename T = void> T NotifyLoadingBegin() {
		return ((T (*)(LockStepImpl*))(Il2CppBase() + 0x46AFA58))(this);
	}
	template <typename T = void> T NotifyLoadingEnd() {
		return ((T (*)(LockStepImpl*))(Il2CppBase() + 0x46AFBC8))(this);
	}
	template <typename T = void> T OnLoginProc(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46AFD38))(this, data);
	}
	template <typename T = void> T OnLogoutProc(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46AFF90))(this, data);
	}
	template <typename T = void> T OnReadyProc(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46B0144))(this, data);
	}
	template <typename T = void> T OnBroadcastProc(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(LockStepImpl*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46B03B4))(this, data);
	}
	template <typename T = void> T OnRecvedFrameProc(int32_t numberOfReceivedFrames) {
		return ((T (*)(LockStepImpl*, int32_t))(Il2CppBase() + 0x46B04D0))(this, numberOfReceivedFrames);
	}
	template <typename T = void> T OnStateChangedProc(int32_t state, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(LockStepImpl*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46B0570))(this, state, data);
	}
	template <typename T = bool> static T gcloud_lockstep_init(Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x46ADCAC))(0, data, len);
	}
	template <typename T = void> static T gcloud_lockstep_update(int32_t fps) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46AF2D8))(0, fps);
	}
	template <typename T = void> static T gcloud_lockstep_ready() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AED84))(0);
	}
	template <typename T = bool> static T gcloud_lockstep_reconnect_manually() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AEEF4))(0);
	}
	template <typename T = void> static T gcloud_lockstep_set_start_point(int32_t startPoint) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46AF5D4))(0, startPoint);
	}
	template <typename T = void> static T gcloud_lockstep_seek(int32_t start, int32_t count, int32_t frameIntervalMs) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x46AF0A0))(0, start, count, frameIntervalMs);
	}
	template <typename T = uintptr_t> static T gcloud_lockstep_get_status() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AD908))(0);
	}
	template <typename T = bool> static T gcloud_lockstep_has_started() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AD790))(0);
	}
	template <typename T = bool> static T gcloud_lockstep_has_logined() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AD6B4))(0);
	}
	template <typename T = int32_t> static T gcloud_lockstep_get_current_max_frameId() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AF458))(0);
	}
	template <typename T = uint32_t> static T gcloud_lockstep_get_playerID() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AD5E0))(0);
	}
	template <typename T = void> static T gcloud_lockstep_getresult(Il2CppArray<uintptr_t>* buf, uintptr_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46B073C))(0, buf, size);
	}
	template <typename T = bool> static T gcloud_lockstep_login(Il2CppArray<uintptr_t>* receipt, int32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x46ADE78))(0, receipt, len);
	}
	template <typename T = void> static T gcloud_lockstep_logout() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AE01C))(0);
	}
	template <typename T = bool> static T gcloud_lockstep_input(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, int32_t flag) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, bool, int32_t))(Il2CppBase() + 0x46AE80C))(0, data, len, rawUdp, flag);
	}
	template <typename T = bool> static T gcloud_lockstep_send_broadcast(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, int32_t flag) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, bool, int32_t))(Il2CppBase() + 0x46AE1D8))(0, data, len, rawUdp, flag);
	}
	template <typename T = bool> static T gcloud_lockstep_send_to_server(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x46AE3C0))(0, data, len, rawUdp);
	}
	template <typename T = bool> static T gcloud_lockstep_popframe(Il2CppArray<uintptr_t>* buf, uintptr_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46AEBD8))(0, buf, size);
	}
	template <typename T = void> static T gcloud_lockstep_get_speed(uintptr_t udp, uintptr_t tcp) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46AF77C))(0, udp, tcp);
	}
	template <typename T = bool> static T gcloud_set_user_data(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46AF928))(0, key, value);
	}
	template <typename T = void> static T gcloud_notify_loading_begin() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AFAF8))(0);
	}
	template <typename T = void> static T gcloud_notify_loading_end() {
		return ((T (*)(void *))(Il2CppBase() + 0x46AFC68))(0);
	}
	template <typename T = void> T xLuaBaseProxy_OnUpdate(float P0) {
		return ((T (*)(LockStepImpl*, float))(Il2CppBase() + 0x46B082C))(this, P0);
	}

};

}
