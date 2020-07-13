#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TssManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TssManager"));
	}

	template <typename T = bool> static T& ENABLE_MPVE_LOG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ENABLE_PVP_LOG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TSS_SEND_SVR_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TSS_MAX_PACK_PER_SEND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TSS_CHANNEL_HOST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T& TSS_CHANNEL_IPList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_MiliSecOfGatheringTssData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DataGatherer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_DataGathererThread() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& THREAD_JOIN_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_NextTimeForSendingTssData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _Lock() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TssRequestProducerList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TssRequestConsumerList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CachedBytes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_RStream() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_WStream() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_BinWriter() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_BinReader() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_didTssInit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_EigenInfoReady() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = float> T& m_UploadInterval() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_LastUploadTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& MrpcsDataStream() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& MrpcsDataStreamSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannelHosts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannnelHost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannnelBuiltinIp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMrpcsDataStream() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSafeTssReportData2String() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvAntiDataFromSvr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendDataToSvr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSendDataToSvr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEigenInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendEigenInfoToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSendEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTssSendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllPendingTssSendRequests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTssSendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E6E8A4))(this);
	}
	template <typename T = void> T SetChannelHosts() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E6EA28))(this);
	}
	template <typename T = void> T SetChannnelHost(Il2CppString* host) {
		return ((T (*)(TssManager*, Il2CppString*))(Il2CppBase() + 0x2E6EDB4))(this, host);
	}
	template <typename T = void> T SetChannnelBuiltinIp(Il2CppString* ip) {
		return ((T (*)(TssManager*, Il2CppString*))(Il2CppBase() + 0x2E6EC6C))(this, ip);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E6EEFC))(this);
	}
	template <typename T = void> T OnBackEnd() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E6EFC4))(this);
	}
	template <typename T = void> T OnFrontEnd() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E6F0A8))(this);
	}
	template <typename T = void> T OnLogin(uintptr_t platform, Il2CppString* openId, uint32_t worldId, Il2CppString* roleId) {
		return ((T (*)(TssManager*, uintptr_t, Il2CppString*, uint32_t, Il2CppString*))(Il2CppBase() + 0x2E6F18C))(this, platform, openId, worldId, roleId);
	}
	template <typename T = bool> static T SetMrpcsDataStream(Il2CppArray<uintptr_t>* data, int32_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2E6F4E0))(0, data, size);
	}
	template <typename T = Il2CppString*> T GetSafeTssReportData2String() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E6F6B4))(this);
	}
	template <typename T = void> T OnRecvAntiDataFromSvr(uintptr_t ntf) {
		return ((T (*)(TssManager*, uintptr_t))(Il2CppBase() + 0x2E6F838))(this, ntf);
	}
	template <typename T = void> T SendDataToSvr() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E6F93C))(this);
	}
	template <typename T = bool> T DoSendDataToSvr(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(TssManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2E6FA94))(this, data);
	}
	template <typename T = void> T SetEigenInfo(Il2CppList<uintptr_t>* infoList, float interval) {
		return ((T (*)(TssManager*, Il2CppList<uintptr_t>*, float))(Il2CppBase() + 0x2E6FC9C))(this, infoList, interval);
	}
	template <typename T = void> T SendEigenInfoToServer() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E6FFC4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(TssManager*, float))(Il2CppBase() + 0x2E7010C))(this, deltaTime);
	}
	template <typename T = bool> T CheckSendEnable() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E7035C))(this);
	}
	template <typename T = void> T AddTssSendRequest(uintptr_t req) {
		return ((T (*)(TssManager*, uintptr_t))(Il2CppBase() + 0x2E6E320))(this, req);
	}
	template <typename T = int32_t> T GetAllPendingTssSendRequests() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E70510))(this);
	}
	template <typename T = void> T ProcessTssSendRequest() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E706EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E70A38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(TssManager*))(Il2CppBase() + 0x2E70A40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TssManager*, float))(Il2CppBase() + 0x2E70A48))(this, P0);
	}

};

}
